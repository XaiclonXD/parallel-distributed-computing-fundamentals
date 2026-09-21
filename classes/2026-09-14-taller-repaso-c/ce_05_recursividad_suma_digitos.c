/**
    * @file ce_05_recursividad_suma_digitos.c
    * @brief Recursive function that sums the digits of a number
    * @author Jhoan Araque
    * @date 2026-09-14
*/
#include <stdio.h>

int sumaDigitos(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sumaDigitos(n / 10);
}

int main(void) {
    int n;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("El numero debe ser positivo.\n");
        return 1;
    }

    printf("La suma de los digitos de %d es: %d\n", n, sumaDigitos(n));

    return 0;
}
