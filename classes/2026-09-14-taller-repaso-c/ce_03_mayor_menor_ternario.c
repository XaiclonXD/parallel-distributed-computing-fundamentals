/**
    * @file ce_03_mayor_menor_ternario.c
    * @brief Determina el mayor y el menor de tres numeros usando operadores ternarios
    * @author Jhoan Araque
    * @date 2026-09-14
*/
#include <stdio.h>

int mayor(int a, int b, int c) {
    int mayorAB = (a > b) ? a : b;
    return (mayorAB > c) ? mayorAB : c;
}

int menor(int a, int b, int c) {
    int menorAB = (a < b) ? a : b;
    return (menorAB < c) ? menorAB : c;
}

int main(void) {
    int a, b, c;

    printf("Ingrese tres numeros enteros:\n");
    printf("Numero 1: ");
    scanf("%d", &a);
    printf("Numero 2: ");
    scanf("%d", &b);
    printf("Numero 3: ");
    scanf("%d", &c);

    printf("El mayor es: %d\n", mayor(a, b, c));
    printf("El menor es: %d\n", menor(a, b, c));

    return 0;
}
