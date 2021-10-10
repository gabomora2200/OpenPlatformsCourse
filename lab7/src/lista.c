#include "lista.h"
#include <stdlib.h>
#include <stdio.h>

// para mayor facilidad se unieron las funciones "siguiente" y "crearPosicion" en una sola que crea la posicion y ademas asigna el puntero a la siguiente.
numero *crearNumero(int num)
{
    numero *numeroUno = malloc(sizeof(numero));
    numeroUno->d = num;
    // se tira el siguiente a NULL para que no exista posibilidad de que anden punteros bailando por todo lado.
    numeroUno->siguiente = NULL;
    return numeroUno;
}

Lista *crearLista()
{
    Lista *l = malloc(sizeof(Lista));
    l->items = 0;
    l->primero = NULL;
    return l;
}

void imprimirLista(Lista *l)
{
    printf("%p\n", l);
    if (l)
    {
        numero *t = l->primero;
        for (int i = 0; i < l->items + 1; i++)
        {
            printf("%d\n", t->d);
            printf("%p\n", t);
            t = t->siguiente;
        }
    }
}

numero *obtenerElemento(int posicionEnLista, Lista *lista)
{
    if (lista->primero == NULL)
    {
        return NULL;
    }
    else
    {
        numero *cursor = lista->primero;
        int posicion = 0;
        while (posicion < posicionEnLista && cursor->siguiente)
        {
            cursor = cursor->siguiente;
            posicion++;
        }
        if (posicion != posicionEnLista)
        {
            return NULL;
        }
        else
        {
            printf("El Numero en la posicion dada es: %d\n", cursor->d);
            return cursor->siguiente;
        }
    }
}

/////////////////////// Funciones que insertan elementos en la lista ///////////////////////////

void insertarInicio(Lista *lista, int numeroA)
{
    numero *numeroUno = crearNumero(numeroA);
    numeroUno->siguiente = lista->primero;
    lista->primero = numeroUno;
    lista->items++;
}

void insertarFinal(Lista *lista, int numeroA)
{
    numero *numeroFinal = crearNumero(numeroA);
    numero *cursor = lista->primero;
    if (lista->primero == NULL)
    {
        lista->primero = numeroFinal;
    }
    else
    {
        while (cursor->siguiente)
        {
            cursor = cursor->siguiente;
        }
        cursor->siguiente = numeroFinal;
        lista->items++;
    }
}

///////////////////// Funciones que eliminan elemenos en la lista /////////////////////////

void eliminarNumero(numero *numeroUno)
{
    free(numeroUno);
}

Lista *eliminarLista(Lista *lista)
{
    if (lista->primero == NULL)
    {
        printf("La lista esta vacia\n");
    }
    else
    {
        struct numero *p = lista->primero;
        struct numero *q;

        for (int i = 0; i < lista->items + 1; i++)
        {
            q = p->siguiente;
            printf("%p\n", p);
            free(p);
            p = q;
        }
        lista->items = 0;
    }
    free(lista);
    return NULL;
}

void eliminarElemento(int numeroEliminar, Lista *lista)
{
    if (lista->primero)
    {
        if (numeroEliminar == 0)
        {
            numero *eliminado = lista->primero;
            lista->primero = lista->primero->siguiente;
            eliminarNumero(eliminado);
            printf("%p", eliminado);
            lista->items--;
        }
        else
        {
            numero *cursor = lista->primero;
            int posicion = 0;
            while (posicion < (numeroEliminar - 1))
            {
                cursor = cursor->siguiente;
                posicion++;
                break;
            }
            numero *eliminado = cursor->siguiente;
            cursor->siguiente = eliminado->siguiente;
            eliminarNumero(eliminado);
            printf("%p", eliminado);
            lista->items--;
        }
    }
}
void eliminarPrincipio(Lista *lista)
{
    if (lista->primero)
    {
        numero *eliminado = lista->primero;
        lista->primero = lista->primero->siguiente;
        eliminarNumero(eliminado);
        lista->items--;
    }
}

void eliminarFinal(Lista *lista)
{
    if (lista->primero)
    {
        if (lista->primero->siguiente)
        {
            numero *cursor = lista->primero;
            while (cursor->siguiente->siguiente)
            {
                cursor = cursor->siguiente;
            }
            numero *eliminado = cursor->siguiente;
            cursor->siguiente = NULL;
            eliminarNumero(eliminado);
        }
        else
        {
            numero *eliminado = lista->primero;
            lista->primero = NULL;
            eliminarNumero(eliminado);
            lista->items--;
        }
    }
}

