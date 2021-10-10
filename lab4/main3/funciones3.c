#include "./funciones3.h"

/*
TIPO_DE_RETORNO identificador(TIPO arg1, TIPO arg2, .... )
{

    return TIPO_DE_RETORNO;
}
*/
/**
* @brief funcion para calcular la nota mayor en un grupo de 4 notas
*
* @param calificacion numero 1.
* @param calificacion numero 2.
* @param calificacion numero 3.
* @param calificacion numero 4.
* @return Calificacion mayor.
* @return Calificacion menor.
* @return Calificacion promedio.
**/
// Calificacion mayor 
int calcNotaMayor(int cal1,int cal2,int cal3,int cal4){
	int mayor=0;
	if (cal1 > cal2 && cal1 > cal3 && cal1 > cal4){
		mayor=cal1;
	}
	else 
		if (cal2 > cal1 && cal2 > cal3 && cal2 > cal4){
			mayor=cal2;
		}
		else
			if (cal3 > cal1 && cal3 > cal2 && cal3 > cal4){
				mayor=cal3;
			}
			else
				if (cal4 > cal1 && cal4 > cal2 && cal4 > cal3){
					mayor=cal4;
				}
				else
					if (cal1 == cal2 && cal1 == cal3 && cal1 == cal4){
						mayor=cal1;
					}

	return  mayor;
}

// Calificacion menor
int calcNotaMenor(int cal1,int cal2,int cal3,int cal4){
	int menor=0;
	if (cal1 < cal2 && cal1 < cal3 && cal1 < cal4){
		menor=cal1;
	}
	else
		if (cal2 < cal1 && cal2 < cal3 && cal2 < cal4){
			menor=cal2;

		}
		else
			if (cal3 < cal1 && cal3 < cal2 && cal3 < cal4){
				menor=cal3;

			}
			else
				if (cal4 < cal1 && cal4 < cal2 && cal4 < cal3){
					menor=cal4;
				}

	return menor;
}

// Promedio de las notas
float promedioNotas(int cal1,int cal2,int cal3,int cal4){
	float prom;
	prom=(cal1+cal2+cal3+cal4)/4.0;
	
	return prom;
}
	
	
	

