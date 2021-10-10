#include <stdio.h>
#include <stdlib.h>
#include "funcion.h"

char laberinto[6][8] = {


			'#','#','#','#','#','Q','#','#',
			'#',' ',' ',' ','#',' ',' ','#',
			'#',' ','#',' ','#','#',' ','#',
			'#','#',' ',' ',' ','#',' ','#',
			'r',' ',' ','#',' ',' ',' ','#',
			'#','#','#','#','#','#','#','#'

			
			};//Laberinto




void buscarQuesoRaton(){

	// ciclos para buscar la posicion del raton en el laberinto.
	for ( int i = 0; i < a; i++ ){
    		for ( int j = 0; j < b; j++){
			if ( laberinto[i][j] == 'r' )
				   { dirRx = i;
				     dirRy = j; }
        
		}
	}
	

	// ciclos para buscar el queso o la posicion de la salida del laberinto.
	for ( int w = 0; w < a; w++ ){
    		for ( int k = 0; k < b; k++){
			if ( laberinto[w][k] == 'Q' )
				   { dirQx = w;
				     dirQy = k; }
        
		}
	}

	
	printf("La posicion del raton es: ( %d , %d )\n", dirRx , dirRy);
	printf("La posicion del queso es: ( %d , %d )\n", dirQx , dirQy);
	return ;
}




void imprimir(){
	for(int i = 0 ; i < 6; i++)
	{
		for(int j = 0 ; j < 8; j++)
		{
			printf("%c", laberinto[i][j]);
		}
		printf("\n");
	}
	return ;
}



void buscarQueso(int dirRx, int dirRy){
        imprimir();
	// Argumento Recursivo
	//printf("La nueva posicion del del raton es: ( %d , %d )\n", dirRx , dirRy);
	if(dirRx == dirQx && dirRy == dirQy){
	
	
		printf("El raton ha encontrado el queso\n");
		exit(0);
	}
	
	else
	{
		//printf("La nueva posicion del del raton es: ( %d , %d )\n", dirRx , dirRy);
		if(laberinto[dirRx][dirRy-1] == ' '){
				laberinto[dirRx][dirRy] = '.';
				dirRy = dirRy-1;
        			laberinto[dirRx][dirRy] = 'r';
				printf("La nueva posicion del raton es: ( %d , %d )\n\n", dirRx , dirRy);
				buscarQueso(dirRx,dirRy);
		
		}
		
		if(laberinto[dirRx][dirRy+1] == ' '){
				laberinto[dirRx][dirRy] = '.';
				dirRy = dirRy+1;
				laberinto[dirRx][dirRy] = 'r';
				printf("La nueva posicion del raton es: ( %d , %d )\n\n", dirRx , dirRy);
				buscarQueso(dirRx,dirRy);
		
		}
		
		if(laberinto[dirRx-1][dirRy] == ' ' || laberinto[dirRx-1][dirRy] == 'Q'){
				laberinto[dirRx][dirRy] = '.';
				dirRx = dirRx-1;
			        laberinto[dirRx][dirRy] = 'r';
				printf("La nueva posicion del raton es: ( %d , %d )\n\n", dirRx , dirRy);
				buscarQueso(dirRx,dirRy);
		
		}
		
		if(laberinto[dirRx+1][dirRy] == ' '){
				laberinto[dirRx][dirRy] = '.';
				dirRx = dirRx+1;
			        laberinto[dirRx][dirRy] = 'r';
				printf("La nueva posicion del raton es: ( %d , %d )\n\n", dirRx , dirRy);
				buscarQueso(dirRx,dirRy);
		
		}
	}
	
	return;
}

