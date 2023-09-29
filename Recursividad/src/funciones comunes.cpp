/*
 * funciones comunes.cpp
 *
 *  Created on: 28/09/2023
 *      Author: algo2
 */
#include <iostream>
void mostrarArray(int array[], int& longitud){
	for (int i = 0; i<longitud; i++){
		if (i == longitud-1){
			std::cout << array[i];
		}else{
			std::cout << array[i]<< ", ";
		}
	}
}

void inicializarArray(int array[], int longitud){
	for (int i = 0; i < longitud; i++){
		array[i] = i*10;
	}
}


