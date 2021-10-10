#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdbool.h>
#include <math.h>
#include "./funciones4.h"



void collatz(int x)
{
  
  while (x != 1 ){
    printf( "%d,", x );
    if (x % 2 == 0 ){
      x = x / 2 ;
    }
    else if (x % 2 != 0){
      x = ((x*3) + 1);
    }
    
  }
  printf("1");


}













