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

    

    return 0;
}