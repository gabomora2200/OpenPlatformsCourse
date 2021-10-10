#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdbool.h>
#include <math.h>
#include "./funciones1.h"

//ejercicio 1 
float valorAbsoluto(float n)
{
    if (n > 0) {
      return n;
    }
    else if (n <= 0){
      n = -n;
      return n;
    }
   
}







