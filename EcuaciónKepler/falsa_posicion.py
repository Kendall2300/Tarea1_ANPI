#Librerías
import math

'''
Aproximación del cero en la ecuación de kepler representado por la variable kepler

Estructura: xk, error, k = falsa_posicion(a,b,func,e,M,tol,iterMax)

Parametros: a,b = intervalo [a,b] para encontrar el cero
            func = representa la ecuación de kepler
            e = excentricidad en un intervalo de valor [0,1]
            M = anomalía media valores diferentes a cero
            tol = tolerancia de la aproximación
            iterMax = iteraciones máximas a realizar

            xk = aproximación del cero
            error = error del método dado por |M(xk)|
            k = iteraciones realizadas

Ejemplo: E, error, k = falsa_posicion(0,math.pi,'E - e * math.sin(E) - M',0.5,math.pi,1e-10,1000)
'''

def falsa_posicion(a,b,func,e,M,tol,iterMax):
    func_e = func.replace('e',str(e))
    func_M = func_e.replace('M',str(M))
    f = lambda E: eval(func_M)

    if f(a)*f(b) > 0:
        print("No cumple con el método de falsa posición")
        return None, None, None
    else:
        k = 1
        while k < iterMax:
            E = b - ((f(b) * (a - b)) / (f(a) - f(b)))
            if f(a) * f(E) < 0:
                b = E
            else:
                a = E
            
            # Error generado
            error = abs(f(E))
            if error < tol:
                break

            # Incremento de k
            k += 1
        
        return E, error, k

print("Método de la falsa posición\n")

E, error, k = falsa_posicion(0,math.pi,'E - e * math.sin(E) - M',0.5,math.pi,1e-10,1000)

print("\nEl valor de la ecuación de Kepler: ", E)
print("\nEl error generado es: ", error)
print("\nLas iteraciones realizadas: ", k, "\n")
