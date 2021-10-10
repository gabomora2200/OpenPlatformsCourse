#include <stdlib.h>
/*
 * @file lista.h
 *
 * @author Gabriel Araya Mora
 * @author Ignacio Montenegro Quesada
 * @author Andres Arias Campos
 *
 * @version 0.1
 *
 * @copyright
 * Copyright (C) Parallax, Inc. 2012. All Rights MIT Licensed.
 *
 * @brief This program was created for the liked list laboratory. Its main function is to create a list of numbers using linked lists.
*/

typedef struct numero
{
    int d;
    struct numero* siguiente;
    
}numero;

typedef struct Lista
{    
    int items;
    numero* primero;

}Lista;

/**
 * @brief This function "creaNumero" is intended to create instances of numbers so they can be stored in a list. 
 *
 *  
 * @return Returns the pointer in witch the number is stored.
 *
 */
numero* crearNumero(int num);

/**
 * @brief This function "creaLista" is intended to create a list. 
 *
 *  
 * @return Returns the pointer in witch the list is stored.
 *
 */
Lista* crearLista();

/**
 * @brief This function "imprimirLista" is intended to print the list the user created. 
 *
 */
void imprimirLista(Lista *l);

/**
 * @brief This function "ObternerElemento" is intended to obtain any value stored in the list by a given position. 
 *
 *  
 * @return Returns the pointer in witch we allocate the memory of the next place in the list.
 *
 */
numero* obtenerElemento(int posicionEnLista, Lista* lista);

/**
 * @brief This function "insertarFinal" is intended to add numbers at the end of the list. 
 *
 */
void insertarFinal(Lista * lista, int numeroA);

/**
 * @brief This function "eliminarNumero" is intended to delete any number. 
 *
 */
void eliminarNumero(numero* numeroUno);

/**
 * @brief This function "eliminarLista" is intended to delete the whole list. 
 *
 *  
 * @return Returns NULL because the list does not exist any more.
 *
 */
Lista* eliminarLista(Lista* lista);

/**
 * @brief This function "eliminarElemento" is intended to delete any number by its given position.  
 *
 */
void eliminarElemento(int numeroEliminar, Lista* lista);


/**
 * TERMS OF USE: MIT License
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

