/*
 * ordenamiento recursivo.cpp
 *
 *  Created on: 28/09/2023
 *      Author: algo2
 */
#include "ordenamiento recursivo.h"
#include "funciones comunes.h"
#include <iostream>
void ordenamientoPorSeleccion(){
	/*
	 * El ordenamiento por seleccion realiza comparaciones hasta encontrar el minimo dentro de
	 * una lista de valores y lo coloca al frente de ella hasta el puesto n-1 descontando de cada
	 * iteracion el elemento que acaba de colocar en su lugar
	 */
	int longitud = 10;
	int arrayDeEnteros[longitud] = {10,9,2,23,56,6,-12,34,5,0};
	std::cout << "Array desordenado: "; mostrarArray(arrayDeEnteros, longitud);std::cout << std::endl;
	ordenarSelectivamente(arrayDeEnteros, longitud);
	std::cout << "Array ordenado: "; mostrarArray(arrayDeEnteros, longitud);std::cout << std::endl;
}

	/*
	 * La idea es crear un puntero que apunte la posicion a modificar (ultima), y
	 * otro que itere al resto de items y se compare con el maximo. Cuando
	 * se llegue al final se realice el intercambio de lugares entre el puntero posicion
	 * y el puntero maximo. Se termine el ordenamiento cuando el largo de la lista sea 0
	 */
void ordenarSelectivamente(int array[], int longitud){
	int* punteroPosicion;
	int* punteroMaximo;
	int iteracion = longitud-1;
	int* pIteracion = &iteracion;
	intercambiarMaximos(array, longitud, punteroMaximo, punteroPosicion, pIteracion);
}

void intercambiarMaximos(int array[],int& longitud,int* punteroM,int* punteroP, int* pI){
	if (*pI == 0){
		return;
	}
	if (longitud == 0){
		longitud = *pI;
		*pI -= 1 ;
		intercambiarPunteros(punteroM, punteroP);
		intercambiarMaximos(array, longitud, punteroM, punteroP, pI);
	}
	if (*pI+1 == longitud){
		punteroM = &array[longitud-1];
		punteroP = &array[longitud-1];
	}

	if (*punteroM < array[longitud-1]){
		punteroM = &array[longitud-1];
	}
	longitud -=1 ;
	intercambiarMaximos(array, longitud, punteroM, punteroP, pI);
}

void intercambiarPunteros(int* puntero1, int* puntero2){
	int* aux = new int;
	*aux = *puntero1;
	*puntero1 = *puntero2;
	*puntero2 = *aux;
	delete aux;
}

/*
 * el ordenamiento por burbujeo realiza iteraciones sobre la lista a ordenar intercambiando
 * los elementos contiguos para dejar los mayores hacia el final (en caso de ordenamiento menor-mayor)
 * hasta que la lista esta ordenada. Cuando termina de recorrer la lista, el ultimo elemento ya esta ordenado
 */
void ordenamientoPorBurbujeo(){
	int longitud = 10;
	int arrayDeEnteros[longitud] = {10,9,2,23,56,6,-12,34,5,0};
	int posicion = 0;
	int* punteroPosicion = &posicion;
	std::cout<< "\nArray desordenado: "; mostrarArray(arrayDeEnteros, longitud);
	ordenarPorBurbuja(arrayDeEnteros,longitud-1, punteroPosicion);
	std::cout<< "\nArray ordenado: "; mostrarArray(arrayDeEnteros, longitud);
}

void ordenarPorBurbuja(int array[], int longitud, int* posicion){
	if (longitud == 1){
		return;
	}
	if (*posicion == longitud){
		*posicion = 0;
		longitud -= 1;
		ordenarPorBurbuja(array, longitud, posicion);
	}else{
		if (array[*posicion] > array[*posicion+1]){
			intercambiarPunteros(&array[*posicion], &array[*posicion+1]);
		}
		*posicion += 1;
		ordenarPorBurbuja(array, longitud, posicion);
	}
}





