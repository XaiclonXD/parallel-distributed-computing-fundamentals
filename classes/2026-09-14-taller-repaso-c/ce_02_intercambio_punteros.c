/*
 * Ejercicio 2: Intercambio de Valores con Punteros
 * Intercambia los valores de dos enteros usando punteros.
 */
#include <stdio.h>

void intercambiar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int num1, num2;

    printf("Ingrese el primer numero entero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &num2);

    printf("Antes del intercambio: num1 = %d, num2 = %d\n", num1, num2);

    intercambiar(&num1, &num2);

    printf("Despues del intercambio: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
