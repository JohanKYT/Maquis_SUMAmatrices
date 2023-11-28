#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Kevin Calle Maquis Calle
int main()
{
    // Agregamos la funcion para que no nos de error al usar una funcion que nos brinde valores aleatorios
    srand(time(NULL));
    int n, m, o, p;
    // Inicializamos las variables y ponemos que el usuario meta los valores del tama;o de la matriz y leemos eso
    printf("Ingeres el numero de filas MATRIZ 1:\n");
    scanf("%d", &n);
    printf("Ingeres el numero de columnas MATRIZ 1:\n");
    scanf("%d", &m);
    // Inicializamos las variables y ponemos que el usuario meta los valores del tama;o de la matriz y leemos eso
    printf("Ingeres el numero de filas MATRIZ 2:\n");
    scanf("%d", &o);
    printf("Ingeres el numero de columnas MATRIZ 2:\n");
    scanf("%d", &p);

    int Matrix[n][m];
    int MatrixA[o][p];
    int MatrixB[n][m];

    // Agregamos un if para poner una condicion donde verifique que se puede realizar el programa
    if (MatrixA[n][m] == MatrixA[o][p])
    {
        printf("\nLA MATRIZ 1 ES:\n");
        for (int i = 0; i < n; i++)
        {
            printf("\n");
            for (int j = 0; j < m; j++)
            {
                // Usamos la funcion donde nos seleccione numeros aleatorios de o al 100
                Matrix[i][j] = rand() % 100 + 1;
                printf("%d\t|\t ", Matrix[i][j]);
            }
        }
        printf("\nLA MATRIZ 2 ES:\n");
        for (int i = 0; i < o; i++)
        {
            printf("\n");
            for (int j = 0; j < p; j++)
            {
                MatrixA[i][j] = rand() % 100 + 1;
                printf("%d\t|\t ", MatrixA[i][j]);
            }
        }
       
    }

    return 0;
}