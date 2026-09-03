#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUCURSALES 25
#define VENTA_MIN 1000
#define VENTA_MAX 10000

int main(void) {
    srand((unsigned int)time(NULL));

    clock_t inicio = clock();

    // Arreglos paralelos: IDs de sucursales y sus ventas
    int sucursales[NUM_SUCURSALES];
    double ventas[NUM_SUCURSALES];
    double suma_ventas = 0.0;

    // Generar datos y calcular la suma total
    for (int i = 0; i < NUM_SUCURSALES; i++) {
        sucursales[i] = i + 1; // Sucursal 1 a 25
        ventas[i] = VENTA_MIN + (rand() % (VENTA_MAX - VENTA_MIN + 1));
        suma_ventas += ventas[i];
    }

    double promedio = suma_ventas / NUM_SUCURSALES;

    clock_t fin = clock();
    double tiempo_total = (double)(fin - inicio) / CLOCKS_PER_SEC;

    // Salida por pantalla
    printf("Promedio de ventas: $%.2f\n\n", promedio);
    printf("Sucursales con ventas por encima del promedio:\n");
    for (int i = 0; i < NUM_SUCURSALES; i++) {
        if (ventas[i] > promedio) {
            printf(" - Sucursal %2d: $%.2f\n", sucursales[i], ventas[i]);
        }
    }

    printf("\nTiempo de ejecucion: %f segundos\n", tiempo_total);

    return EXIT_SUCCESS;
}