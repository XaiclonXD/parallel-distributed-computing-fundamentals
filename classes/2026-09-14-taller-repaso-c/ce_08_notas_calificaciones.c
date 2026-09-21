/**
    * @file ce_08_notas_calificaciones.c
    * @brief Asigna una calificacion en letras a partir de una nota numerica
    * @author Jhoan Araque
    * @date 2026-09-14
*/
#include <stdio.h>

char calificar(int nota) {
    if (nota >= 90 && nota <= 100) {
        return 'A';
    } else if (nota >= 80 && nota < 90) {
        return 'B';
    } else if (nota >= 70 && nota < 80) {
        return 'C';
    } else if (nota >= 60 && nota < 70) {
        return 'D';
    } else {
        return 'F';
    }
}

int main(void) {
    int nota;

    printf("Ingrese una nota numerica (0-100): ");
    scanf("%d", &nota);

    if (nota < 0 || nota > 100) {
        printf("Nota invalida.\n");
        return 1;
    }

    printf("Calificacion: %c\n", calificar(nota));

    return 0;
}
