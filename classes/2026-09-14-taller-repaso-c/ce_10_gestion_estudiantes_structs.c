/**
    * @file ce_10_gestion_estudiantes_structs.c
    * @brief Student management system using structs, pointers, and dynamic arrays
    * @author Jhoan Araque
    * @date 2026-09-14
*/
#include <stdio.h>
#include <stdlib.h>

#define NOTAS_POR_ESTUDIANTE 3
#define NOMBRE_MAX 50
#define NOTA_APROBACION 60.0

typedef struct {
    int id;
    char nombre[NOMBRE_MAX];
    float notas[NOTAS_POR_ESTUDIANTE];
    float promedio;
} Estudiante;

float calcularPromedio(Estudiante *e) {
    float suma = 0;
    for (int i = 0; i < NOTAS_POR_ESTUDIANTE; i++) {
        suma += e->notas[i];
    }
    return suma / NOTAS_POR_ESTUDIANTE;
}

void mostrarAprobados(Estudiante *lista, int n) {
    printf("\nEstudiantes aprobados:\n");
    int hayAprobados = 0;
    for (int i = 0; i < n; i++) {
        if (lista[i].promedio >= NOTA_APROBACION) {
            printf("ID: %d, Nombre: %s, Promedio: %.2f\n",
                   lista[i].id, lista[i].nombre, lista[i].promedio);
            hayAprobados = 1;
        }
    }
    if (!hayAprobados) {
        printf("Ningun estudiante aprobo.\n");
    }
}

int main(void) {
    int n;

    printf("Ingrese el numero de estudiantes: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("El numero de estudiantes debe ser positivo.\n");
        return 1;
    }

    Estudiante *estudiantes = (Estudiante *)malloc(n * sizeof(Estudiante));
    if (estudiantes == NULL) {
        printf("Error al reservar memoria.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nEstudiante %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &estudiantes[i].id);
        printf("Nombre: ");
        scanf("%49s", estudiantes[i].nombre);

        for (int j = 0; j < NOTAS_POR_ESTUDIANTE; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &estudiantes[i].notas[j]);
        }

        estudiantes[i].promedio = calcularPromedio(&estudiantes[i]);
    }

    printf("\nPromedios de los estudiantes:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Nombre: %s, Promedio: %.2f\n",
               estudiantes[i].id, estudiantes[i].nombre, estudiantes[i].promedio);
    }

    mostrarAprobados(estudiantes, n);

    free(estudiantes);

    return 0;
}
