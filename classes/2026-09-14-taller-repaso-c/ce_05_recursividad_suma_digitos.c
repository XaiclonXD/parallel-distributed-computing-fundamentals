/*
 * Ejercicio 5: Recursividad con Suma de Digitos
 * Funcion recursiva que suma los digitos de un numero.
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
