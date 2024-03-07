import math
'''
Aproximación del cero en la función func utilizando el método Newton-Raphson

Estructura: xk, error, k = jarratt(x0,func,e,M,tol,iterMax)

Paramentros: x0 = valor inicial
            func = función en texto a la que se va aproximar el cero
            tol = tolerancia de la aproximación
            iterMax = iteraciones máximas a realizar
            
            xk = aproximación del cero
            error = error del método dado por |func(xk)|
            k = iteraciones realizadas

Ejemplo de uso: xk, error, k = jarratt(1,'E - e * sin(E) - M',0.5,pi,1e-10,1000)
'''

def jarratt(x0, func, e, M, tol, iterMax):
    func_e = func.replace('e',str(e))
    func_M = func_e.replace('M',str(M))
    # Definición de la función y su derivada
    f = lambda E: eval(func_M)
    fd = lambda E: (f(E + 1e-6) - f(E - 1e-6)) / (2 * 1e-6)

    xk = x0
    zk = xk - (2 / 3) * (f(xk) / fd(xk))
    k = 1

    while k < iterMax:
        if fd(xk) != 0:
            xk = xk - (1 / 2) * (f(xk) / fd(xk)) * (
                        (3 * fd(zk) + fd(xk)) /
                        (3 * fd(zk) - fd(xk)))
        else:
            print("La derivada de la función no cumple con el método de Jarrat")
            return None, None, None

        error = abs(f(xk))
        if error < tol:
            break
        k += 1

    return xk, error, k

print("Método de Jarrat\n")

xk, error, k = jarratt(1, 'E - e * math.sin(E) - M', 0.5, math.pi, 1e-10, 1000)

print("\nEl valor aproximado: ", xk)
print("\nEl error es: ", error)
print("\nIteraciones realizadas", k)
