/*
 * ordenamiento recursivo.h
 *
 *  Created on: 28/09/2023
 *      Author: algo2
 */

#ifndef ORDENAMIENTO_RECURSIVO_H_
#define ORDENAMIENTO_RECURSIVO_H_

//ejercicio 2 de los adicionales de recursividad: Escribir una version recursiva para el ordenamiento por seleccion
void ordenamientoPorSeleccion();

//funcion que contiene a la funcion recursiva
void ordenarSelectivamente(int array[], int longitud);

//ordena los maximos del array al fondo de la lista ordenandola de menor a mayor
void intercambiarMaximos(int array[],int& longitud,int* punteroM,int* punteroP);

#endif /* ORDENAMIENTO_RECURSIVO_H_ */
