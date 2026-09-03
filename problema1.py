import random
import time

inicio = time.perf_counter()

suma = 0

for i in range(10):
    numeroGen = random.randint(1, 50)
    suma += numeroGen

promedio = suma / 10

fin = time.perf_counter()
tiempo_total = fin - inicio

print("Suma de valores: ", suma)
print("Promedio de valores: ", promedio)
print(f"Tiempo de ejecucion: {tiempo_total:.8f} segundos")