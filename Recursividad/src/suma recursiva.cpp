/*
 * suma recursiva.cpp
 *
 *  Created on: 28/09/2023
 *      Author: algo2
 */
#include "suma recursiva.h"
#include <iostream>
void sumaRecursiva(){
	int longitud = 10;
	int arrayDeEnteros[longitud];

	inicializarArray(arrayDeEnteros, longitud);

	int resultado = sumarRecursivamente(arrayDeEnteros, longitud);
	std::cout << resultado;
}

void inicializarArray(int array[], int longitud){
	for (int i = 0; i < longitud; i++){
		array[i] = i*10;
	}
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
		std::cout << array[longitud]<<"\n";
		sumaR(array, longitud, suma);
	}
}
