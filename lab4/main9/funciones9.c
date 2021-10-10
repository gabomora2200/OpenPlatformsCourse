#include "./funciones9.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
/*
TIPO_DE_RETORNO identificador(TIPO arg1, TIPO arg2, .... )
{

    return TIPO_DE_RETORNO;
}
*/
/**
* @brief funcion para administrar la poblacion
*
*  
*  
* @return cantidad total de personas que viven en el complejo.
* 
**/
//ejercicio 9

int complejoDeApartas(){
srand(time(NULL));
int edificio[7][20][6];// array para el complejo de edificios
int i;// variable para el for
int j;//variable para el for
int k;// variable para el for
int tamEd = sizeof(edificio) / sizeof(edificio[0][0][0]);// tamano del arreglo


int totPersonas = 0;
	// llenando el arreglo
	for(i = 0;i < 7; i++){
		for(j = 0;j < 20; j++){
			for(k = 0;k < 6; k++){
				edificio[i][j][k] = 1;		
			}
		}
		
	
	}  
	//imprimiendo el arreglo
	for(i = 0;i < 7; i++){
		for(j = 0;j < 20; j++){
			for(k = 0;k < 6; k++){
				totPersonas += edificio[i][j][k];		
			}
		}
		
	
	}  

	return totPersonas;


	



}

