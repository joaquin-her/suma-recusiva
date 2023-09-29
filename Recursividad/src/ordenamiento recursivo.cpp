/*
 * ordenamiento recursivo.cpp
 *
 *  Created on: 28/09/2023
 *      Author: algo2
 */
#include "ordenamiento recursivo.h"
#include "funciones comunes.h"
void ordenamientoPorSeleccion(){
	/*
	 * El ordenamiento por seleccion realiza comparaciones hasta encontrar el minimo dentro de
	 * una lista de valores y lo coloca al frente de ella hasta el puesto n-1 descontando de cada
	 * iteracion el elemento que acaba de colocar en su lugar
	 */
	int longitud = 10;
	int arrayDeEnteros[longitud] = {10,9,2,23,56,6,-12,34,5,0};
	mostrarArray(arrayDeEnteros, longitud);
	ordenarSelectivamente(arrayDeEnteros, longitud);
	mostrarArray(arrayDeEnteros, longitud);
}

void ordenarSelectivamente(int array[], int longitud){
	/*
	 * La idea es crear un puntero que apunte la posicion a modificar (ultima), y
	 * otro que itere al resto de items y se compare con el maximo. Cuando
	 * se llegue al final se realice el intercambio de lugares entre el puntero posicion
	 * y el puntero maximo. Se termine el ordenamiento cuando el largo de la lista sea 0
	 */
	int* punteroPosicion;
	int* punteroMaximo;
	int iteracion = longitud;
	int* pIteracion = &iteracion;
	intercambiarMaximos(array, longitud, punteroMaximo, punteroPosicion, pIteracion);

}

void intercambiarMaximos(int array[],int& longitud,int* punteroM,int* punteroP, int* pI){
	if (longitud == 0){
		longitud = *pI; //fix
		*pI -= 1 ; //fix
		intercambiarPunteros(punteroM, punteroP);
		intercambiarMaximos(array, longitud, punteroM, punteroP, pI);
	}
	if (*pI == longitud){
		punteroM = &array[longitud];
		punteroP = &array[longitud];
	}
	if (*pI == 0){
		return;
	}
	if (*punteroM < array[longitud]){
		punteroM = &array[longitud];
	}
	longitud -=1 ; //fix
	intercambiarMaximos(array, longitud, punteroM, punteroP, pI);
}

void intercambiarPunteros(int* puntero1, int* puntero2){
	int* aux = new int;
	*aux = *puntero1;
	*puntero1 = *puntero2;
	*puntero2 = *aux;
	delete aux;
}
