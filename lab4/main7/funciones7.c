#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdbool.h>
#include <math.h>
#include "./funciones7.h"


void permutaciones (int n)
{
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= n; j++){
      for (int k = 1; k <= n; k++){
        if ((i != j) && (j != k) && (k != i)){
          printf("%d %d %d\n", i , j , k );
        }
      }
    
    }
  
  }
}

