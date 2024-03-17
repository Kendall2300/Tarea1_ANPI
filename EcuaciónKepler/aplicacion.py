import timeit
import math
from sympy import *
import jarratt_, falsa_posicion, biseccion, potra_ptak

if __name__ == "__main__":
    # Caso de prueba para bisección y falsa posición
    caso_1 = 'E - e * math.sin(E) - M'

    # Caso de prueba para jarratt y potra-ptak
    caso_2 = 'x - e * sin(x) - M'

    print("-----------------------------------------\n")
    print("Metodo de Bisección\n")
    
    # Llama a la función biseccion dentro del módulo biseccion
    E, error, k = biseccion.biseccion(-10,20, caso_1, 0.5, 7, 1e-10, 1000)
    
    print("\nEl valor de la ecuación de Kepler: ", E)
    print("\nEl error generado es: ", error)
    print("\nLas iteraciones realizadas: ", k)

    tiempo_biseccion = timeit.timeit(lambda: biseccion.biseccion(-10,20, caso_1, 0.5, 7, 1e-10, 1000),
                                     number=1)
    print("\nTiempo de bisección", tiempo_biseccion)


    print("-----------------------------------------\n")
    print("Método de la falsa posición\n")
    xk2, error2, k2 = falsa_posicion.falsa_posicion(-10,20,caso_1,0.5,7,1e-10,1000)

    print("\nEl valor de la ecuación de Kepler: ", xk2)
    print("\nEl error generado es: ", error2)
    print("\nLas iteraciones realizadas: ", k2, "\n")

    tiempo_falsaposicion = timeit.timeit(lambda: falsa_posicion.falsa_posicion(-10,20,caso_1,0.5,7,1e-10,1000),
                                     number=1)
    print("\nTiempo de la falsa posición", tiempo_falsaposicion)

    print("-----------------------------------------\n")

    print("Método de Jarrat\n")
    xk3, error3, k3 = jarratt_.jarratt(2,caso_2, 0.5, 7, 1e-10, 1000)
    
    print("\nEl valor de la ecuación de Kepler: ", xk3)
    print("\nEl error es: ", error3)
    print("\nIteraciones realizadas", k3)

    tiempo_jarratt = timeit.timeit(lambda: jarratt_.jarratt(2,caso_2, 0.5, 7, 1e-10, 1000),
                                     number=1)
    print("\nTiempo de Jarratt", tiempo_jarratt)

    print("-----------------------------------------\n")

    print("Método de potra-ptak")

    xk4, error4, k4 = potra_ptak.potra_ptak(2,caso_2, 5e-1,7, 1e-10, 1000)
    
    print("\nEl valor de la ecuación de Kepler: ", xk4)
    print("\nEl error es: ", error4)
    print("\nIteraciones realizadas", k4)

    tiempo_potakptak = timeit.timeit(lambda: potra_ptak.potra_ptak(2,caso_2, 5e-1, 7, 1e-10, 1000),
                                     number=1)
    print("\nTiempo de potra_ptak", tiempo_potakptak)

    print("-----------------------------------------\n")



