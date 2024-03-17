
from sympy import sympify, diff, symbols
from sympy import *
'''
Aproximación del cero en la función func utilizando el método Newton-Raphson

Estructura: xk, error, k = jarratt(x0,func,e,M,tol,iterMax)

Paramentros: x0 = valor inicial
            func = representa la ecuación de kepler
            e = excentricidad en un intervalo de valor [0,1]
            M = anomalía media valores diferentes a cero
            tol = tolerancia de la aproximación
            iterMax = iteraciones máximas a realizar
            
            xk = aproximación del cero
            error = error del método dado por |func(xk)|
            k = iteraciones realizadas

Ejemplo de uso: xk, error, k = jarratt(1,'x - e * sin(x) - M',0.5,pi,1e-10,1000)
'''

def jarratt(x0, func, e, M, tol, iterMax):
    # Remplazo de las variables e y M
    func_e = func.replace('e',str(e))
    func_M = func_e.replace('M',str(M))
    # De string a expresion
    f = sympify(func_M)
    #Derivar la función con respecto a x
    x = symbols('x')
    fd = diff(f,x)
    
    if M != 0:
        if e >= 0 and e < 1:
            xk = x0
            zk = xk - (2 / 3) * (f.subs(x,xk).evalf() / fd.subs(x,xk).evalf())
            if fd.subs(x,xk).evalf() != 0:
                k = 1
                while k < iterMax:
                    xk = xk - (1 / 2) * (f.subs(x,xk).evalf() / fd.subs(x,xk).evalf()) * (
                        (3 * fd.subs(x,zk).evalf() + fd.subs(x,xk).evalf()) /
                        (3 * fd.subs(x,zk).evalf() - fd.subs(x,xk).evalf()))
                    # Error generado
                    error = abs(f.subs(x,xk).evalf())
                    if error < tol:
                        break
                    # Incremento de k
                    k += 1
                return xk, error, k
            else:
                print("La derivada de la función no cumple con el método de Jarrat")
                return None, None, None
        else:
            print("El valor de e debe ser igual o mayor a 0 o menor 1")
            return None, None, None
    else:
        print("M debe ser distinto de cero")
        return None, None, None 

# print("Método de Jarrat\n")

# xk, error, k = jarratt(1, 'x - e * sin(x) - M', 0.5, pi, 1e-10, 1000)

# print("\nEl valor aproximado: ", xk)
# print("\nEl error es: ", error)
# print("\nIteraciones realizadas", k)