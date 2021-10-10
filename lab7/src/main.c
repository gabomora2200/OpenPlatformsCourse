#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


int main (){

    int opcion;
    Lista* l = crearLista();
    printf("Bienvenido al programa de pruebas,escoja una opcion que desee realizar.\n");

    while(opcion!=6){
        printf("\n1. Agregar un numero al final de la lista\n2. Borrar numero al final de la lista\n3. Imprimir Lista\n4. Buscar Elemento en la lista\n5. Eliminar lista\n6. Salir del programa\n\n Inserte aqui la opcion que desea realizar: ");  
        scanf("%d", &opcion);
        switch (opcion){
        case 1:
            printf( "\n1. Agregar un numero al final de la lista\n" );
            int d1;
            printf( "\n Introduzca el dato que desea agregar: ");
            scanf("%d", &d1);
            insertarFinal(l,d1);
            break;
        case 2:
            printf("\n2. Borrar numero al final de la lista\n");
            int d2;
            printf("Que posicion tiene el numero que desea eliminar? \n");
            scanf("%d",&d2);
            if (d2 <= l -> items){
                eliminarElemento(d2,l);
            }else{
                printf("El numero que ingreso se sale del rango.");
            }
            break;
        case 3:
            printf("La lista es:\n");
            imprimirLista(l);
            break;
        case 4:
            printf("El numero que desea obtener se encuentra en la posicion?\n");
            int d3;
            scanf("%d",&d3);
            obtenerElemento(d3,l);
            break;
        case 5:
            printf("La lista se elimino de manera exitosa :D \n");
            l = eliminarLista(l);
            break;
        case 6:
            printf("Adios :D \n");
            break;
        default:
            printf( "\n   ERROR: Eso no es una opcion. >:V" );
            break;
        }
    }
}

