#include <stdio.h>
#include <stdlib.h>
#include "./matriz.h"

//punto1
float** matriz(int filas, int columnas){
	int i,j;
	float **matriz;
	int contador = 1;
	matriz = (float**) malloc (sizeof(float*)*filas);
		for(i = 0; i < filas; i++){
			matriz[i] = (float*) malloc (sizeof(float)*columnas);
	}

	/* llenando la matriz */
	for(i = 0; i < filas; i++){
		for(j = 0; j < columnas; j++){
			matriz[i][j] = contador;
			contador+=1;
		}	
	}
	return matriz;		
}

//punto2
float limpiarMatriz(float** matriz, int filas, int columnas){
	int i,j;
	// limpiando la matriz //
	for(i = 0; i < filas; i++){
		for(j = 0; j < columnas; j++){
			matriz[i][j] = 0;
		}	
	}
	
	// imprimiendo la matriz//
	printf("La matriz limpia es:\n");
	for(i = 0; i < filas; i++){
		printf("\n");
		for(j = 0; j < columnas; j++){
			printf("%f , ",matriz[i][j]);
		}
	}
	printf("\n\n");	

}

//punto3
float eliminarMatriz(float** matriz, int filas){
	int i;
	
	for (i = 0; i < filas; i++){
		free (matriz[i]);	
	}
			
	free (matriz);
}



//punto4
float sumarMatriz(float** matriz, float** matriz2, int filas, int columnas){
    int i, j;
    float resultado[filas][columnas];
    float** matrizA = matriz;
    float** matrizB = matriz2;

    for(i = 0; i < filas; i++)
    {
      for(j = 0; j < filas; j++)
      {
        resultado[i][j] = 0;
        resultado[i][j] += matrizA[i][j]+matrizB[i][j];
      }
    }

    /* Imprimiendo la matriz original*/
    	printf("La matriz original es:\n");	
    	for(i = 0; i < filas; i++){
	printf("\n");
	for(j = 0; j < columnas; j++){
		printf(" %f, ", matriz[i][j]);
		}
	}
	printf("\n\n");


    /* Imprimiendo la matriz sumada*/
    printf("La matriz sumada es: \n");
    for(i = 0; i < filas; i++){
      printf("\n");
      for(j = 0; j < columnas; j++){
        printf("%f ", resultado[i][j]);
      }
    }
    printf("\n\n");	
    return 0;
}


//punto5
int multiplicarMatriz(float** matriz, int n1, int m1, float** matriz2, int n2, int m2)
  {
    if (m1 == n2)
    {
      int i, j, k, plus;
      int filas = n1;
      int columnas = m2;
      int columnas2 = m1;
      float resultado[n1][m2];
      float** matrizA = matriz;
      float** matrizB = matriz2;

      for(i = 0; i < filas; i++)
      {
        for(j = 0; j < columnas; j++)
        {
          plus = 0;
          for(k = 0; k < columnas2; k++)
          {
            plus += matrizA[i][k] * matrizB[k][j];
            resultado[i][j] = plus;
          }
        }
      }
      printf("La matriz multiplicada es: \n");
      for(i = 0; i < n1; i++){
        printf("\n");
        for(j = 0; j < m2; j++){
          printf("%f ", resultado[i][j]);
        }
      }
    }
    else
    {
      printf("Matrices no multiplicables");
    }
    printf("\n\n");

    return 0;
  }

//punto6
float matrizEscalar(int escalar, float** matriz, int filas, int columnas ){
	int i,j;
	printf("Introduzca el escalar a sumar: ");
	scanf("%d",&escalar);
	// Llenando la matriz //
	for(i = 0; i < filas; i++){
		for(j = 0; j < columnas; j++){
			matriz[i][j] = matriz[i][j]+escalar;
		}	
	}
	// imprimiendo la matriz//
	for(i = 0; i < filas; i++){
		printf("\n");
		for(j = 0; j < columnas; j++){
			printf("%f , ",matriz[i][j]);
		}
	}
	printf("\n\n");	
	return 0;
}

//punto7
float matrizEscalarM(int escalar, float** matriz, int filas, int columnas){
	int i,j;
	printf("Introduzca el escalar a multiplicar : ");
	scanf("%d",&escalar);
	// Llenando la matriz //
	for(i = 0; i < filas; i++){
		for(j = 0; j < columnas; j++){
			matriz[i][j] = matriz[i][j]*escalar;
		}	
	}
	// imprimiendo la matriz//
	for(i = 0; i < filas; i++){
		printf("\n");
		for(j = 0; j < columnas; j++){
			printf("%f , ",matriz[i][j]);
		}
		
	}
	printf("\n\n");	
	return 0;

}
//punto8
float matrizTransp(float** matriz, int filas, int columnas){
	int i,j;
	
	/* Imprimiendo la matriz transpuesta*/
	printf("La matriz transpuesta es:\n");
	for(i = 0; i < filas; i++){
		printf("\n");
		for(j = 0; j < columnas; j++){
			printf(" %f, ", matriz[j][i]);
		}
		
	}
	printf("\n\n");
	return 0;
}







