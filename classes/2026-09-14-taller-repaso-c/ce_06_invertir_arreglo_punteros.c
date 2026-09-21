/**
    * @file ce_06_invertir_arreglo_punteros.c
    * @brief Invierte los elementos de un arreglo usando aritmetica de punteros
    * @author Jhoan Araque
    * @date 2026-09-14
*/
#include <stdio.h>

#define MAX_TAM 100

void invertirArreglo(int *arr, int tam) {
    int *inicio = arr;
    int *fin = arr + (tam - 1);

    while (inicio < fin) {
        int temp = *inicio;
        *inicio = *fin;
        *fin = temp;
        inicio++;
        fin--;
    }
}

int main(void) {
    int arreglo[MAX_TAM];
    int tam;

    printf("Ingrese el tamano del arreglo (max %d): ", MAX_TAM);
    scanf("%d", &tam);

    if (tam <= 0 || tam > MAX_TAM) {
        printf("Tamano invalido.\n");
        return 1;
    }

    for (int i = 0; i < tam; i++) {
        printf("Ingrese el elemento [%d]: ", i);
        scanf("%d", &arreglo[i]);
    }

    invertirArreglo(arreglo, tam);

    printf("Arreglo invertido: ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");

    return 0;
}
