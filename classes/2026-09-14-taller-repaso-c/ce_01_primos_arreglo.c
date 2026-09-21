/**
    * @file ce_01_primos_arreglo.c
    * @brief Generates an array of random numbers and counts how many are prime
    * @author Jhoan Araque
    * @date 2026-09-14
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_TAM 100
#define VALOR_MAX 100

/* Determina si un numero es primo. */
int esPrimo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(void) {
    int n;
    int arreglo[MAX_TAM];

    printf("Ingrese el tamano del arreglo (max %d): ", MAX_TAM);
    scanf("%d", &n);

    if (n <= 0 || n > MAX_TAM) {
        printf("Tamano invalido.\n");
        return 1;
    }

    srand((unsigned int)time(NULL));

    int contadorPrimos = 0;
    for (int i = 0; i < n; i++) {
        arreglo[i] = rand() % VALOR_MAX + 1;
        if (esPrimo(arreglo[i])) {
            contadorPrimos++;
        }
    }

    printf("Arreglo generado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");

    printf("Cantidad de numeros primos encontrados: %d\n", contadorPrimos);

    return 0;
}
