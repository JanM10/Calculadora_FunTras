import math

def falsa_posicion(a, b, func, tol, iterMax):
    """
    Aproximacion del cero de la funcion func utilizando el metodo de la Falsa Posicion

    Parametros:
        a, b: Intervalo [a, b] donde se busca el cero
        func: Texto que representa la funcion a la que se le aproxima el cero
        tol: Tolerancia de aproximacion
        iterMax: Iteraciones maximas a realizar

    Retorna:
        xk: Aproximacion del cero
        error: Error del metodo dado por |func(xk)|
        k: Iteraciones realizadas
    """

    # Texto a una Funcion Numerica en Python
    f = lambda x: eval(func)

    xk = (a * f(b) - b * f(a)) / (f(b) - f(a))

    for k in range(iterMax):
        xkAnterior = xk
        xk = (a * f(b) - b * f(a)) / (f(b) - f(a))
        if f(a) * f(xk) < 0:
            b = xk
        else:
            a = xk
        error = max(abs(f(xk)), abs(xk - xkAnterior))
        if error < tol:
            break

    return xk, error, k

# Ejemplo de uso
xk, error, k = falsa_posicion(1, 2, 'math.exp(x) - 2*x - 10', 1e-10, 1000)
print(f"Aproximación de la raíz: {xk:.6f}")
print(f"Error: {error}")
print(f"Iteraciones realizadas: {k}")
