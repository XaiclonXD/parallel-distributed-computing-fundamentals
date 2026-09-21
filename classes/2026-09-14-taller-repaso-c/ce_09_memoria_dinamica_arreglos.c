/**
    * @file ce_09_memoria_dinamica_arreglos.c
    * @brief Creates a dynamic array, fills it with user input, and calculates its sum
    * @author Jhoan Araque
    * @date 2026-09-14
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;

    printf("Ingrese el numero de elementos: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("El numero de elementos debe ser positivo.\n");
        return 1;
    }

    int *arreglo = (int *)malloc(n * sizeof(int));
    if (arreglo == NULL) {
        printf("Error al reservar memoria.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Ingrese el elemento [%d]: ", i);
        scanf("%d", &arreglo[i]);
    }

    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += arreglo[i];
    }

    printf("La suma total de los elementos es: %d\n", suma);

    free(arreglo);

    return 0;
}
