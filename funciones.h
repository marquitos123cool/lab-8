#pragma once

//ejercicio 1
int **crearMatriz(int n, int m);
void printMatriz(int **matriz, int n, int m);
int **Sum_M(int **A, int **B, int n, int m);
int **Res_M(int **A, int **B, int n, int m);
int **Produc_Escalar(int **matriz, int n, int m, int escalar);
int **Produc_Matrises(int **A, int **B, int na, int ma, int nb, int mb);
int Num_random();
void liberarMatriz(int **matriz, int n, int m);

//ejercicio 2

char *nombreRandom(int cant_letras);
void printMatrizNombres(char **nombres, int r);
void liberarMatriz2(char **m, int r);
float calcularPromedio(int *parciales, int num_parciales);

