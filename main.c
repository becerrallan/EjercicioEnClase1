#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned int)time(NULL));


    clock_t inicio = clock();


    const int total_iteraciones = 500;
    const int min = 50;
    const int max = 100;

    int pares = 0;
    int impar = 0;

    for (int i = 0; i < total_iteraciones; i++) {
        int numero = min + rand() % (max - min + 1);
        if (numero % 2 == 0) {
            pares++;
        } else {
            impar++;
        }
    }



    clock_t fin = clock();

    double tiempo_total = (double)(fin - inicio) / CLOCKS_PER_SEC;

    printf("Numeros par: %d\n", pares);
    printf("Numeros impar: %d\n", impar);
    printf("Tiempo: %f segundos\n", tiempo_total);

    return EXIT_SUCCESS;
}