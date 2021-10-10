#include <stdio.h>
#include <stdlib.h>
#include "./funciones5.h"
#include <math.h>

/*
TIPO_DE_RETORNO identificador(TIPO arg1, TIPO arg2, ... )
{
    return TIPO_DE_ RETORNO;
}
*/

/**
* @brief funcion que despliega menu de opciones de sumatorias/productorias
* 
* @param vacio
* @return operacion a calcular

**/

int imprimir_sumatoria()
{
  printf("Bienvenido, introduzca la operación que desea hacer:\n");
  printf("Introduzca 1 para: Sumatoria, de i hasta n, de: sqrt(2i-4)\n");
  printf("Introduzca 2 para: Sumatoria, de i hasta n, de: (2^(i+1)-2^(i))/(i+1)\n");
  printf("Introduzca 3 para: Sumatoria, de i hasta n, de: (i*(-1)^(i+1))/2^(i)\n");
  printf("Introduzca 4 para: Productoria, de i hasta n, de: i(i+1)\n");
  int x;
  scanf("%d", &x);
  return x;
}

/**
* @brief funcion para calcular una sumatoria/productoria pidiendo el inicio y fin
* 
* @param operacion a calcular

* @return vacio

**/

void sumatoria(int x)
{

    int i, n, h;
    double total;

  if (x == 1)
  {
    printf("Digite el punto de inicio i (debe ser igual o mayor a 2) y luego el punto final \n");
    scanf("%d %d", &i, &n);
    total = 0;
    for (h = i; h <= n; h++)
    {
      total += sqrt(2*h - 4);
    }
    printf("Total = %.3f", total);
  }

  else if (x == 2)
  {
    printf("Digite el punto de inicio i (debe ser igual o mayor a 0) y luego el punto final \n");
    scanf("%d %d", &i, &n);
    total = 0;
    for (h = i; h <= n; h++)
    {
      total += (pow(2, h+1) - pow(2, h))/(h+1);
    }
    printf("Total = %.3f", total);
  }

  else if (x == 3)
  {
    printf("Digite el punto de inicio i y luego el punto final \n");
    scanf("%d %d", &i, &n);
    total = 0;
    for (h = i; h <= n; h++)
    {
      total += pow(-1, h + 1)*(h/pow(2, h));
    }
    printf("Total = %.3f", total);
  }

  else if (x == 4)
  {
    printf("Digite el punto de inicio i y luego el punto final \n");
    scanf("%d %d", &i, &n);
    total = 1;
    for (h = i; h <= n; h++)
    {
      total *= h*(h + 1);
    }
    printf("Total = %.3f", total);
  }
  return;
}
