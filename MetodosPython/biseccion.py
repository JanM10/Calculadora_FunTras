import math

def biseccion(a, b, func, tol, iterMax):
    """
    Aproximacion del cero de la funcion func utilizando el metodo de la Biseccion

    Estructura: [xk,error,k]=biseccion(a,b,func,tol,iterMax)

    Parametros: a,b = intervalo [a,b] donde se busca el cero
                func = texto que representa a la funcion a la que se le aproxima el cero
                tol = tolerancia de aproximacion
                iterMax = iteraciones maximas a realizar
                xk = aproximacion del cero
                error = error del metodo dado por |func(xk)|
                k = iteraciones realizadas

    [xk,error,k]=biseccion(2,3,'math.exp(x)-2*x-10',1e-10,1000)
    """

    # Texto a una Funcion Numerica en Python
    f = lambda x: eval(func)

    xk = (a + b) / 2

    if f(a) * f(b) < 0:
        for k in range(iterMax):
            xkAnterior = xk
            xk = (a + b) / 2
            if f(a) * f(xk) < 0:
                b = xk
            else:
                a = xk
            error = max(abs(f(xk)), abs(xk - xkAnterior))
            if error < tol:
                break
    else:
        xk = 'N/A'
        error = 'N/A'
        k = 'N/A'
        print('No se cumple la condicion de Bolzano con los datos dados')

    return xk, error, k

# Ejemplo de uso
xk, error, k = biseccion(2, 3, 'math.exp(x)-2*x-10', 1e-10, 1000)
print(f"Aproximación de la raíz: {xk:.6f}")
print(f"Error: {error}")
print(f"Iteraciones realizadas: {k}")

