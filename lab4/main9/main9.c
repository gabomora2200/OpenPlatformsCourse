#include <stdio.h>
#include <float.h>
#include <math.h>
#include <limits.h>
#include "./funciones9.h"
#include <time.h>

int main() {

float promPersonas = complejoDeApartas()/7.0;
float promPersonasPiso = promPersonas/20.0;

//ejercicio 9	

printf("La cantidad total de habitantes en el complejo es de: %d\n", complejoDeApartas());

printf("La cantidad promedio de habitantes por torres en el complejo es de: %f\n", promPersonas);

printf("La cantidad promedio de habitantes por piso de cada torre tiene un valor de: %f\n",promPersonasPiso);


}

