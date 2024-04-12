
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "funciones.h"


int main(void)
{

    srand(time(NULL));

    int **A=crearMatriz(2, 3);
    int **B=crearMatriz(2, 3);

    printf("Matriz A:\n");
    printMatriz(A, 2, 3);
    printf("\nMatriz B:\n");
    printMatriz(B, 2, 3);

    //suma + :))
    printf("\nOperaciones:\n");
    printf("Suma:\n");
    int **C_suma=Sum_M(A,B,2,3);
    printMatriz(C_suma,2,3);

    //resta - :((
    printf("\nResta:\n");
    int **C_resta=Res_M(A,B,2,3);
    printMatriz(C_resta,2,3);

    //producto escalar :o
    printf("\nProducto de un escalar:\n");
    int escalar=Num_random();
    printf("Escalar: %d\n", escalar);
    int **C_escalar=Produc_Escalar(A,2,3,escalar);
    printMatriz(C_escalar,2,3);

    //producto matriz O.O
    printf("\nProducto de matrices:\n");
    int **C_producto=Produc_Matrises(A,B,2,3,2,3);
    printMatriz(C_producto,2,3);

    // liberar matriz :3
    liberarMatriz(A,2,3);
    liberarMatriz(B,2,3);
    liberarMatriz(C_suma,2,3);
    liberarMatriz(C_resta,2,3);
    liberarMatriz(C_escalar,2,3);
    liberarMatriz(C_producto,2,3);

    return 0;
    }

