/**
    * @file ce_04_factorial_paridad.c
    * @brief Calculates the factorial of a number and checks whether it is even or odd
    * @author Jhoan Araque
    * @date 2026-09-14
*/
#include <stdio.h>

long long factorialFor(int n) {
    long long resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int esPar(int n) {
    int i = n;
    while (i >= 2) {
        i -= 2;
    }
    return (i == 0);
}

int main(void) {
    int n;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("El numero debe ser positivo.\n");
        return 1;
    }

    long long fact = factorialFor(n);
    printf("El factorial de %d es: %lld\n", n, fact);

    if (esPar(n)) {
        printf("%d es par.\n", n);
    } else {
        printf("%d es impar.\n", n);
    }

    return 0;
}
