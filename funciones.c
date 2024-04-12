#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "funciones.h"

//ejercicio 1
int **crearMatriz(int n, int m)
{
    int **matriz=(int **)calloc(n, sizeof(int *));
    for (int i=0;i<n; i++)
    {
        *(matriz+i)=(int *)calloc(m, sizeof(int));
        for (int j=0; j<m; j++)
            *(*(matriz+i)+j)=rand() % 10;
    }
    return matriz;
}

void printMatriz(int **matriz, int n, int m)
{
    for (int i=0;i<n;i++)
    {
        printf("[");
        for (int j = 0; j < m; j++)
        {
            char sep=(j<m-1)?',':'\0';
            printf("%d%*c", matriz[i][j], 2, sep);
        }
        printf("]\n");
    }
}

int **Sum_M(int **A, int **B, int n, int m)
{
    int **C=(int **)calloc(n, sizeof(int *));
    for (int i=0;i<n;i++){


        C[i]=(int *)calloc(m, sizeof(int));
        for (int j=0;j<m;j++)
            C[i][j]=A[i][j]+B[i][j];}

    return C;
    }

int **Res_M(int **A, int **B, int n, int m){

    int **C=(int **)calloc(n, sizeof(int *));

    for (int i=0;i<n;i++){

        C[i]=(int *)calloc(m, sizeof(int));
        for (int j=0;j<m;j++)
            C[i][j]=A[i][j]-B[i][j];}
        
    return C;
}

int **Produc_Escalar(int **matriz, int n, int m, int escalar){

    int **C=(int **)calloc(n, sizeof(int *));

    for (int i=0;i<n;i++){

        C[i]=(int *)calloc(m, sizeof(int));
        for (int j=0;j<m;j++)
            C[i][j]=matriz[i][j]*escalar;}

    return C;
    }

int **Produc_Matrises(int **A, int **B, int na, int ma, int nb, int mb){

    if (ma!=nb){

        printf("Las columnas de A (%d) no coinciden con los renglones de B (%d)\n", ma, nb);
        exit(EXIT_FAILURE);
    }

    int **C=(int **)calloc(na, sizeof(int *));
    for (int i=0;i<na;i++)
        C[i]=(int *)calloc(mb, sizeof(int));

    for (int r=0;r<na;r++){
        
        for (int k=0;k<nb;k++){

        for (int c = 0; c < mb; c++){
                C[r][c] += A[r][k] * B[k][c];
        }
    }
}

    return C;
    }

void liberarMatriz(int **matriz, int n, int m)
{
    for(int i=0;i<n;i++)
    {
        free(matriz[i]);
    }
    free(matriz);
}

int Num_random()
{
    return rand()%10+1;
}


//ejercicio  2

char *nombreRandom(int cant_letras)
{

    char *nombre = (char *)malloc(sizeof(char) * cant_letras);

    for (int i = 0; i < cant_letras; i++)
        nombre[i] = 97 + rand() % 26;
    return nombre;
}

void printMatrizNombres(char **nombres, int r)
{
   
    for (int i = 0; i < r; i++)
    {
        printf("[");
      
        int tam = strlen(nombres[i]);

        for (int j = 0; j < tam; j++)
        {
            printf("%c", nombres[i][j]);
        }
        printf("]\n");
    }
}

void liberarMatriz2(char **m, int r)
{
    for (int i = 0; i < r; i++){
        free(m[i]);
        free(m);
}

float calcularPromedio(int *parciales, int num_parciales){

    int suma=0;
    for (int i=0;i<num_parciales;i++)
        suma+=parciales[i];

    return (float)suma/num_parciales;}

