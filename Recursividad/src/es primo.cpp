/*
 * es primo.cpp
 *
 *  Created on: 29/09/2023
 *      Author: algo2
 */
#include "es primo.h"
#include <iostream>
/*
 *ejercicio 3 de la guia de adicionales de recursividad: escribir un par de funciones que
 *ejercicio aplicando recursidad mutua determinen si un numero es primo o no
 */
void esPrimoRecursivo(){
	int numeroPrimo = 11;
	int numeroNoPrimo = 6;
	bool resultado1 = esPrimo(numeroPrimo);
	bool resultado2 = esPrimo(numeroNoPrimo);
	mostrarResultado(numeroPrimo, resultado1);
	mostrarResultado(numeroNoPrimo, resultado2);
}

void mostrarResultado(int& numero, bool resultado){
	if (resultado){
		std::cout << "\nEl numero "<<numero<< " es primo\n";
	}else{
		std::cout << "El numero "<<numero<< " no es primo\n";
	}
}

bool esPrimo(int numero){
	if (noEsPrimo(numero)){
		return true;
	}
}

bool noEsPrimo(int numero){
	if (numero % 2 == 0 or numero %3 == 0 or numero % 5 == 0){
		return false;
	}
}
