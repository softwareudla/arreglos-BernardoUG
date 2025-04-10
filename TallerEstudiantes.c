#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ESTUDIANTES 50
#define MAX_NOMBRE 20

int main() {
    int opcion;
    int ingles = 0, matematicas = 0, fisica = 0;
    int cant_ingles = 0, cant_matematicas = 0, cant_fisica = 0;

    char estudiantes_ingles[MAX_ESTUDIANTES][MAX_NOMBRE];
    char estudiantes_matematicas[MAX_ESTUDIANTES][MAX_NOMBRE];
    char estudiantes_fisica[MAX_ESTUDIANTES][MAX_NOMBRE];

    float promedios_ingles[MAX_ESTUDIANTES];
    float promedios_matematicas[MAX_ESTUDIANTES];
    float promedios_fisica[MAX_ESTUDIANTES];

    int aprobados_ingles = 0, reprobados_ingles = 0;
    int aprobados_matematicas = 0, reprobados_matematicas = 0;
    int aprobados_fisica = 0, reprobados_fisica = 0;

    do {
        printf("\nBIENVENIDO AL SISTEMA DE PASAR NOTAS\n");
        printf("Seleccione que asignatura desea editar\n");
        printf("1. INGLES\n");
        printf("2. MATEMATICAS\n");
        printf("3. FISICA\n");
        printf("4. PROMEDIO DE NOTAS\n");
        printf("5. SALIR\n");
        printf("Ingrese su opcion: ");
        scanf("%d", &opcion);

        while (getchar() != '\n'); // Limpiar el buffer

        switch (opcion) {
            case 1: // INGLES
                if (ingles) {
                    printf("Ya ha ingresado estudiantes en inglés.\n");
                    break;
                }
                printf("\n--- INGLES ---\n");
                printf("Ingrese la cantidad de estudiantes: ");
                scanf("%d", &cant_ingles);
                while (getchar() != '\n');

                for (int i = 0; i < cant_ingles; i++) {
                    printf("Estudiante %d: ", i + 1);
                    fgets(estudiantes_ingles[i], MAX_NOMBRE, stdin);
                    estudiantes_ingles[i][strcspn(estudiantes_ingles[i], "\n")] = 0; // quitar '\n'
                }

                int notas_por_estudiante;
                printf("¿Cuántas notas ingresará por estudiante? ");
                scanf("%d", &notas_por_estudiante);

                float nota;
                for (int i = 0; i < cant_ingles; i++) {
                    float suma = 0, notamayor = 0, notamenor = 10;
                    printf("\nNotas de %s:\n", estudiantes_ingles[i]);
                    for (int j = 0; j < notas_por_estudiante; j++) {
                        do {
                            printf("Nota %d: ", j + 1);
                            scanf("%f", &nota);
                            if (nota < 0 || nota > 10)
                                printf("Nota no válida. Debe estar entre 0 y 10.\n");
                        } while (nota < 0 || nota > 10);

                        suma += nota;
                        if (nota > notamayor) notamayor = nota;
                        if (nota < notamenor) notamenor = nota;
                    }

                    promedios_ingles[i] = suma / notas_por_estudiante;
                    if (promedios_ingles[i] >= 6)
                        aprobados_ingles++;
                    else
                        reprobados_ingles++;

                    printf("Promedio: %.2f\tMayor: %.2f\tMenor: %.2f\n", promedios_ingles[i], notamayor, notamenor);
                }
                ingles = 1;
                break;

            case 2: // MATEMATICAS
                if (matematicas) {
                    printf("Ya ha ingresado estudiantes en matemáticas.\n");
                    break;
                }
                printf("\n--- MATEMATICAS ---\n");
                printf("Ingrese la cantidad de estudiantes: ");
                scanf("%d", &cant_matematicas);
                while (getchar() != '\n');

                for (int i = 0; i < cant_matematicas; i++) {
                    printf("Estudiante %d: ", i + 1);
                    fgets(estudiantes_matematicas[i], MAX_NOMBRE, stdin);
                    estudiantes_matematicas[i][strcspn(estudiantes_matematicas[i], "\n")] = 0;
                }

                printf("¿Cuántas notas ingresará por estudiante? ");
                scanf("%d", &notas_por_estudiante);

                for (int i = 0; i < cant_matematicas; i++) {
                    float suma = 0, notamayor = 0, notamenor = 10;
                    printf("\nNotas de %s:\n", estudiantes_matematicas[i]);
                    for (int j = 0; j < notas_por_estudiante; j++) {
                        do {
                            printf("Nota %d: ", j + 1);
                            scanf("%f", &nota);
                            if (nota < 0 || nota > 10)
                                printf("Nota no válida. Debe estar entre 0 y 10.\n");
                        } while (nota < 0 || nota > 10);

                        suma += nota;
                        if (nota > notamayor) notamayor = nota;
                        if (nota < notamenor) notamenor = nota;
                    }

                    promedios_matematicas[i] = suma / notas_por_estudiante;
                    if (promedios_matematicas[i] >= 6)
                        aprobados_matematicas++;
                    else
                        reprobados_matematicas++;

                    printf("Promedio: %.2f\tMayor: %.2f\tMenor: %.2f\n", promedios_matematicas[i], notamayor, notamenor);
                }
                matematicas = 1;
                break;

            case 3: // FISICA
                if (fisica) {
                    printf("Ya ha ingresado estudiantes en física.\n");
                    break;
                }
                printf("\n--- FISICA ---\n");
                printf("Ingrese la cantidad de estudiantes: ");
                scanf("%d", &cant_fisica);
                while (getchar() != '\n');

                for (int i = 0; i < cant_fisica; i++) {
                    printf("Estudiante %d: ", i + 1);
                    fgets(estudiantes_fisica[i], MAX_NOMBRE, stdin);
                    estudiantes_fisica[i][strcspn(estudiantes_fisica[i], "\n")] = 0;
                }

                printf("¿Cuántas notas ingresará por estudiante? ");
                scanf("%d", &notas_por_estudiante);

                for (int i = 0; i < cant_fisica; i++) {
                    float suma = 0, notamayor = 0, notamenor = 10;
                    printf("\nNotas de %s:\n", estudiantes_fisica[i]);
                    for (int j = 0; j < notas_por_estudiante; j++) {
                        do {
                            printf("Nota %d: ", j + 1);
                            scanf("%f", &nota);
                            if (nota < 0 || nota > 10)
                                printf("Nota no válida. Debe estar entre 0 y 10.\n");
                        } while (nota < 0 || nota > 10);

                        suma += nota;
                        if (nota > notamayor) notamayor = nota;
                        if (nota < notamenor) notamenor = nota;
                    }

                    promedios_fisica[i] = suma / notas_por_estudiante;
                    if (promedios_fisica[i] >= 6)
                        aprobados_fisica++;
                    else
                        reprobados_fisica++;

                    printf("Promedio: %.2f\tMayor: %.2f\tMenor: %.2f\n", promedios_fisica[i], notamayor, notamenor);
                }
                fisica = 1;
                break;

            case 4: // PROMEDIOS
                printf("\n=== PROMEDIO DE NOTAS POR MATERIA ===\n\n");

                if (ingles) {
                    float total = 0;
                    printf("INGLES\nNombre\t\tPromedio\n");
                    for (int i = 0; i < cant_ingles; i++) {
                        printf("%s\t\t%.2f\n", estudiantes_ingles[i], promedios_ingles[i]);
                        total += promedios_ingles[i];
                    }
                    printf("Promedio general:\t%.2f\n", total / cant_ingles);
                    printf("Aprobados:\t%d\tReprobados:\t%d\n\n", aprobados_ingles, reprobados_ingles);
                }

                if (matematicas) {
                    float total = 0;
                    printf("MATEMATICAS\nNombre\t\tPromedio\n");
                    for (int i = 0; i < cant_matematicas; i++) {
                        printf("%s\t\t%.2f\n", estudiantes_matematicas[i], promedios_matematicas[i]);
                        total += promedios_matematicas[i];
                    }
                    printf("Promedio general:\t%.2f\n", total / cant_matematicas);
                    printf("Aprobados:\t%d\tReprobados:\t%d\n\n", aprobados_matematicas, reprobados_matematicas);
                }

                if (fisica) {
                    float total = 0;
                    printf("FISICA\nNombre\t\tPromedio\n");
                    for (int i = 0; i < cant_fisica; i++) {
                        printf("%s\t\t%.2f\n", estudiantes_fisica[i], promedios_fisica[i]);
                        total += promedios_fisica[i];
                    }
                    printf("Promedio general:\t%.2f\n", total / cant_fisica);
                    printf("Aprobados:\t%d\tReprobados:\t%d\n\n", aprobados_fisica, reprobados_fisica);
                }

                break;

            case 5:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }

    } while (opcion != 5);

    return 0;
}