#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdbool.h>
#include <stdlib.h>
#include "./funciones8.h"

/*
TIPO_DE_RETORNO identificador(TIPO arg1, TIPO arg2, ... )
{
    return TIPO_DE_ RETORNO;
}
*/
/**
* @brief funcion para calcular los subconjuntos propios de 1 hasta n
* 
* @param limite de la cantidad de conjuntos
* @return vacio

**/


void subconjuntos(int n)
  {
    int k = 0;
    for (int i = 1; i <= n; i++)
    {
      printf("%d\n", i);
    }

    for (int f = 1; f <= n; f++)
    {
      for ( int j = 1; j <= n; j++)
      {
        if (f != j)
        {
          if (k < (f+j))
          {
            printf("%d%d\n", f, j);
            k = (f+j);
          }
        }
      }
    }
    for (int v = 1; v <= n; v++)
    {
      printf("%d", v);
    }
    return;
  }
