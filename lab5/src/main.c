#include <stdio.h>
#include <stdlib.h>
#include "./matriz.h"


int main (int argc, char **argv){
	int filas;
	int columnas;
	printf("Introduce el numero de filas: ");
	scanf("%d", &filas );
	printf("Introduce el numero de columnas: ");
	scanf("%d", &columnas );
	
	float **matriz1 = matriz(filas,columnas);
	
  	sumarMatriz(matriz1, matriz1, filas,columnas);
	
	multiplicarMatriz(matriz1,filas,columnas,matriz1,filas,columnas);

	matrizEscalar(0,matriz1,filas,columnas);
	
	matrizEscalarM(0,matriz1,filas,columnas);
	
	matrizTransp(matriz1,filas,columnas);

	eliminarMatriz(matriz1,filas);

	limpiarMatriz(matriz1,filas,columnas);
	
	return 0;
}

