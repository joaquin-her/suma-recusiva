/*
 * funciones comunes.h
 *
 *  Created on: 28/09/2023
 *      Author: algo2
 */

#ifndef FUNCIONES_COMUNES_H_
#define FUNCIONES_COMUNES_H_

//muestra los valores del array por consola
void mostrarArray(int array[], int& longitud);

//se rellena el array con valores arbitrarios
void inicializarArray(int array[], int longitud);

//intercambia los valores contenidos en el array donde apuntan los punteros
void intercambiarPunteros(int* puntero1, int* puntero2);

#endif /* FUNCIONES_COMUNES_H_ */
