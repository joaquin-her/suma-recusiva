/*
 * es primo.h
 *
 *  Created on: 29/09/2023
 *      Author: algo2
 */

#ifndef ES_PRIMO_H_
#define ES_PRIMO_H_

//llamado principal de la aplicacion es primo
void esPrimoRecursivo();

//muestra el resultado de es primo, y su numer asociado
void mostrarResultado(int& numero, bool resultado);

//devuelve true si el numero es primo
bool esPrimo(int numero);

//devuelve true si el numero no es primo
bool noEsPrimo(int numero);

#endif /* ES_PRIMO_H_ */
