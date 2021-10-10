/*
 * @file matriz.h
 *
 * @author Gabriel Araya Mora
 * @author Andres Arias
 * @author Ignacio Montenegro	
 *
 * @version 0.1
 *
 * @copyright
 * Copyright (C) Parallax, Inc. 2012. All Rights MIT Licensed.
 *
 * @brief This program was created for the dynamic matrix laboratory. Its main function is to create matrixes of a given N*M length, and operate them in different ways.
*/

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief This function matriz is intended to create a  dynamic matrix for later use.
 *
 * @returns the location in memory where the different pointer for the matrix are located.
 */
float** matriz(int filas, int columnas);

/**
 * @brief Replaces every matrix value for cero.
 */
float limpiarMatriz(float** matriz, int filas, int columnas);

/**
 * @brief frees the memory used to create the matrix.
 */
float eliminarMatriz(float** matriz, int filas);

/**
 * @brief Adds two matrixes and prints the result matrix on screen.
 */
float sumarMatriz(float** matriz, float** matriz2,int filas, int columnas);

/**
 * @brief Multiplies two matrixes and prints the result matrix on screen.
 */
int multiplicarMatriz(float** matriz, int n1, int m1, float** matriz2, int n2, int m2);

/**
 * @brief Adds the matrix with a given number and prints it on screen.
 */
float matrizEscalar(int escalar, float** matriz, int filas, int columnas );

/**
 * @brief Multiplies the matrix times a given number and prints it on screen.
 */
float matrizEscalarM(int escalar, float** matriz, int filas, int columnas);

/**
 * @brief Transpose a given matrix and prints it and the original matrix on screen.
 */
float matrizTransp(float** matriz, int filas, int columnas);


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

