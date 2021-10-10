#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define a 6
#define b 8

//direccion del raton
int dirRx;
int dirRy;

//direccion del queso
int dirQx;
int dirQy;

/*
 * @file funcion.h
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
 * @brief This program was created for the recursive method laboratory. Its main function is to help a mouse get to its piece of cheese using a recursive method.
*/


/**
 * @brief This function "buscarQuesoRaton" is intended to search for the coordenates of the mouse "r" and the cheese "Q" in the maze. 
 *
 * 
 */
void buscarQuesoRaton();


/**
 * @brief This function "buscarQueso" is intended to make the mouse search for the cheese in a given maze. 
 *
 *  
 */
void buscarQueso(int dirRx,int dirRy);

/**
 * @brief This function "imprimir" is intended to print the path in witch the mouse is moving through the maze. 
 *
 *  
 */
void imprimir();

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


