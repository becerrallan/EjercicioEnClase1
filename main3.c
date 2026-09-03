#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned int)time(NULL));

    // Inicio del cronómetro
    clock_t inicio = clock();

    const int total_numeros = 10;
    const int min = 1;
    const int max = 50;

    int suma = 0;

    for (int i = 0; i < total_numeros; i++) {
        int numero_gen = min + rand() % (max - min + 1);
        suma += numero_gen;
    }

    const double promedio = (double)suma / total_numeros;

    clock_t fin = clock();
    double tiempo_total = (double)(fin - inicio) / CLOCKS_PER_SEC;

    printf("Suma de valores: %d\n", suma);
    printf("Promedio de valores: %.2f\n", promedio);
    printf("Tiempo: %.6f segundos\n", tiempo_total);

    return EXIT_SUCCESS;
}