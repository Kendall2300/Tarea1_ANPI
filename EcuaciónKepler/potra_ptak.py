from sympy import sympify, diff, symbols
from sympy import *

'''
Aproximación del cero en la ecuación de Kepler usando el método de potra-ptak
Estructura: xk, error, k = potra_ptak(x0,func,e,M,tol,iterMax)
Parametros: x0: valor de la aproximación de la n-estimación
            func = representa la ecuación de kepler
            e = excentricidad en un intervalo de valor [0,1]
            M = anomalía media valores diferentes a cero
            tol = tolerancia de la aproximación
            iterMax = iteraciones máximas a realizar

            xk = aproximación realizada 
            error = error del método dado por |func(xk)|
            k = iteraciones realizadas 

Ejemplo: xk, error, k = potra_ptak(1,'x - e * sin(x) - M',0.5,pi,1e-10,1000)
ACLARACIÓN: Al usar la librería sympy, no despeja la E en la ecuación por lo tanto
            se remplazó por una x
'''

def potra_ptak(x0, func, e, M, tol, iterMax):
    func_e = func.replace('e',str(e))
    func_m = func_e.replace('M',str(M))
    # Pasar de string a una expresion
    f = sympify(func_m)
    # Implementa la derivación de la función f
    x = symbols('x')
    fd = diff(f,x)
    
    if M.evalf() != 0:
        if e >= 0 and e < 1:
            xk = x0
            if fd.subs(x,xk).evalf() != 0:
                k = 0 #Iniciar la k en 0
                while k < iterMax:
                    zk = xk - f.subs(x, xk).evalf() / fd.subs(x, xk).evalf()
                    xk_nuevo = xk - (f.subs(x, xk).evalf() + f.subs(x, zk).evalf()) / fd.subs(x, xk).evalf()
                    error = abs(f.subs(x, xk_nuevo).evalf())
                    if error < tol:
                        break
                
                    xk = xk_nuevo
                        
                    k += 1                                        
                            
                return xk, error, k 
            else:
                print("La derivada no cumple el método de potra-ptak")
                return None, None, None
        else:
            print("El valor de e debe ser igual o mayor a 0 o menor 1")
            return None, None, None
    else:
        print("M debe ser distinto de cero")
        return None, None, None            


# # Pruebas
# print("Método de potra-ptak")
# xk, error, k = potra_ptak(1, 'x - e * sin(x) - M', 5e-1, pi, 1e-10, 1000)
# print("\nEl valor aproximado: ", xk)
# print("\nEl error es: ", error)
# print("\nIteraciones realizadas", k)

