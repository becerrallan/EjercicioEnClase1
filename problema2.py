import time
import random


inicio = time.perf_counter()


pares = 0
impar = 0
for i in range(500):
    numero = random.randint(50, 100)
    if numero % 2 == 0:
        pares += 1
    else:
        impar += 1

fin = time.perf_counter()

tiempo_total = fin - inicio

print("Numeros par:", pares)
print("Numeros impar:", impar)
print(f"Tiempo de ejecucion: {tiempo_total:.6f} segundos")