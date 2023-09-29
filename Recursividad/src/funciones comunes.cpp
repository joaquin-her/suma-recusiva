/*
 * funciones comunes.cpp
 *
 *  Created on: 28/09/2023
 *      Author: algo2
 */
#include <iostream>
#include "funciones comunes.h"
void mostrarArray(int array[], int& longitud){
	std::cout<< "[";
	for (int i = 0; i<longitud; i++){
		if (i == longitud-1){
			std::cout << array[i];
		}else{
			std::cout << array[i]<< ", ";
		}
	}
	std::cout << "]";
}

void inicializarArray(int array[], int longitud){
	for (int i = 0; i < longitud; i++){
		array[i] = i*10;
	}
}


