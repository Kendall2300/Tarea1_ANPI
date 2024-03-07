from sympy import *

def jarratt(x0, func, e, M, tol, iterMax):
    E = Symbol('E')
    func_e = func.replace('e', str(e))
    func_M = func_e.replace('M', str(M))

    # Definición de la función y su derivada
    f = lambda E: eval(func_M)
    expresion = func_M.replace('','')
    print(expresion)
    # Simplify the expression before differentiation
    fd = expresion.diff(E)  # Calcula la derivada de f respecto a E
    print(fd)


    expresion_con_comillas = "'E - e * sin(E) - M'"
    expresion_sin_comillas = expresion_con_comillas.replace("'", "")


    xk = x0
    k = 1

    while k < iterMax:
        if fd.subs(E, xk) != 0:
            zk = xk - (2 / 3) * (f(xk) / fd.subs(E, xk))
            xk = xk - (1 / 2) * (f(xk) / fd.subs(E, xk)) * (
                        (3 * fd.subs(E, zk) + fd.subs(E, xk)) /
                        (3 * fd.subs(E, zk) - fd.subs(E, xk)))
        else:
            print("La derivada de la función no cumple con el método de Jarrat")
            return None, None, None

        error = abs(f(xk))
        if error < tol:
            break
        k += 1

    return xk, error, k

# Ejemplo de uso
print("Método de Jarratt\n")

xk, error, k = jarratt(1, 'E - e * sin(E) - M', 0.5, pi, 1e-10, 1000)

print("\nEl valor aproximado: ", xk)
print("\nEl error es: ", error)
print("\nIteraciones realizadas", k)