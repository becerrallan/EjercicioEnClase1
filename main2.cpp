#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    // Inicio del cronómetro
    clock_t inicio = clock();

    const int a = 10;
    const int b = 20;
    const int suma = a + b;

    // Fin del cronómetro antes de las operaciones de E/S
    clock_t fin = clock();
    double tiempo_total = (double)(fin - inicio) / CLOCKS_PER_SEC;

    printf("La suma es: %d\n", suma);
    printf("Tiempo de ejecucion: %.8f segundos\n", tiempo_total);

    return EXIT_SUCCESS;
}