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
void intercambiarMaximos(int array[],int& longitud,int* punteroM,int* punteroP, int* punteroIteracion);

//intercambia los valores contenidos en el array donde apuntan los punteros
void intercambiarPunteros(int* puntero1, int* puntero2);

//ejercicio 2b de los adicionales de recursividad: escribir una version recursiva del ordenamiento por burbujeo
void ordenamientoPorBurbujeo();

//wrapper de la funcion recursiva que ordena el array
void ordenarPorBurbuja(int array[], int longitud, int* posicion);

//intercambia la posicion de los valores de la lista
void intercambiarPosicion(int* punteroA, int* punteroB);
#endif /* ORDENAMIENTO_RECURSIVO_H_ */
