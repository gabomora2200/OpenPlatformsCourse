#include "./funciones6.h"

/*
TIPO_DE_RETORNO identificador(TIPO arg1, TIPO arg2, .... )
{

    return TIPO_DE_RETORNO;
}
*/
/**
* @brief funcion para calcular integrales dadas
*
* @param parametro inferior de la integral
* @param parametro superior de la integral
* @return resultado de las integrales
**/
float integral1(float param1, float param2){
	float resultado;
	//integral #1
	resultado = (log((pow(param2,2))+1)-log((pow(param1,2))+1))/2.0;

	return resultado;
}

float integral2(float param1, float param2){
	float resultado1;
	//integral #2
	resultado1 = (atan(param2)-atan(param1));

	return resultado1;
}

float integral3(float param1, float param2){
	float resultado2;
	//integral #3
	resultado2 = (-cos(param2)+cos(param1));

	return resultado2;
}

float integral4(float param1, float param2){
	float resultado3;
	//integral #4
	resultado3 = (pow(sin(param2),2)-pow(sin(param1),2))/2;
	return resultado3;
}





