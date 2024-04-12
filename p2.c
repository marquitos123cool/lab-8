#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "funciones.h"

int main(void)
{
    srand(time(NULL));
    
    char **matriz=(char **)calloc(10, sizeof(char *));
   
    for (int renglon = 0; renglon < 10; renglon++){
        
        int cant = 5 + rand() % 26;
        matriz[renglon] = nombreRandom(cant);
    }

 
    printMatrizNombres(matriz, 10);
    
    liberarMatriz2(matriz, 10);

    return 0;
}







