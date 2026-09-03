import random
import time

inicio = time.perf_counter()

num_sucursales = 25
sucursales = []
ventas = []
suma_ventas = 0


for i in range(num_sucursales):
    sucursales.append(i + 1)
    venta = random.randint(1000, 10000)
    ventas.append(venta)
    suma_ventas += venta

promedio = suma_ventas / num_sucursales


encima_promedio = [
    (sucursales[i], ventas[i])
    for i in range(num_sucursales)
    if ventas[i] > promedio
]

fin = time.perf_counter()
tiempo_total = fin - inicio

print(f"Promedio de ventas: ${promedio:.2f}\n")
print("Sucursales con ventas por encima del promedio:")
for suc, venta in encima_promedio:
    print(f" - Sucursal {suc:2d}: ${venta:.2f}")

print(f"\nTiempo de ejecucion: {tiempo_total:.6f} segundos")