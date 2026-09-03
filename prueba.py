import time

inicio = time.perf_counter()

a = 10
b = 20
suma = a + b

fin = time.perf_counter()
tiempo_total = fin - inicio

print("La suma es:", suma)
print(f"Tiempo de ejecucion: {tiempo_total:.8f} segundos")