/*
 * suma recursiva.cpp
 *
 *  Created on: 28/09/2023
 *      Author: algo2
 */
#include "suma recursiva.h"
#include "funciones comunes.h"
#include <iostream>
void sumaRecursiva(){
	int longitud = 10;
	int arrayDeEnteros[longitud];
	inicializarArray(arrayDeEnteros, longitud);

	int resultado = sumarRecursivamente(arrayDeEnteros, longitud);
	std::cout<<"El resultado de la suma del array [" ;
	mostrarArray(arrayDeEnteros, longitud);
	std::cout << "] es:" << resultado;
}

int sumarRecursivamente(int array[], int longitud){
	int suma = 0;
	int* pSuma = &suma;
	sumaR(array, longitud, pSuma );
	return suma;
}

void sumaR(int array[], int& longitud, int* suma){
	if (longitud == 0){
		return;
	}else{
		longitud -= 1;
		*suma += array[longitud];
		sumaR(array, longitud, suma);
	}
}
