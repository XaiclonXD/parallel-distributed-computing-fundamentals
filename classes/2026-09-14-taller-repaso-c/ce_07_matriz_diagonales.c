/**
    * @file ce_07_matriz_diagonales.c
    * @brief Creates a square matrix with random numbers and compares its diagonals
    * @author Jhoan Araque
    * @date 2026-09-14
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_TAM 20
#define VALOR_MAX 50

int main(void) {
    int matriz[MAX_TAM][MAX_TAM];
    int n;

    printf("Ingrese el tamano de la matriz (max %d): ", MAX_TAM);
    scanf("%d", &n);

    if (n <= 0 || n > MAX_TAM) {
        printf("Tamano invalido.\n");
        return 1;
    }

    srand((unsigned int)time(NULL));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = rand() % VALOR_MAX + 1;
        }
    }

    printf("Matriz generada:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    int sumaPrincipal = 0;
    int sumaSecundaria = 0;
    for (int i = 0; i < n; i++) {
        sumaPrincipal += matriz[i][i];
        sumaSecundaria += matriz[i][n - 1 - i];
    }

    printf("Suma de la diagonal principal: %d\n", sumaPrincipal);
    printf("Suma de la diagonal secundaria: %d\n", sumaSecundaria);

    if (sumaPrincipal > sumaSecundaria) {
        printf("La diagonal principal es mayor.\n");
    } else if (sumaSecundaria > sumaPrincipal) {
        printf("La diagonal secundaria es mayor.\n");
    } else {
        printf("Ambas diagonales son iguales.\n");
    }

    return 0;
}
