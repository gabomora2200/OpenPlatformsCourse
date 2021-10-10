#include <stdio.h>
#include "./funciones2.h"


/*
TIPO_DE_RETORNO identificador(TIPO arg1, TIPO arg2, ... )
{
    return TIPO_DE_ RETORNO;
}
*/
/**
* @brief funcion para calcular el precio a pagar por tres peliculas de un videoclub
* 
* @param entrada1
* @param entrada2
* @param entrada3
* @return vacio

**/



void precio_entradas(float Entrada1, float Entrada2, float Entrada3)
{

  float Total;

  if (Entrada1 > Entrada2 && Entrada1 > Entrada3)
  {
    Total = Entrada2 + Entrada3;
  }
  else if (Entrada2 > Entrada1 && Entrada2 > Entrada3)
  {
    Total = Entrada1 + Entrada3;
  }
  else
  {
    Total = Entrada1 + Entrada2;
  }

  printf("El costo total, en colones, por las entradas es: %.3f", Total);

  return;
  }
