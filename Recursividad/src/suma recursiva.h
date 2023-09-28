/*
 * suma recursiva.h
 *
 *  Created on: 28/09/2023
 *      Author: algo2
 */

#ifndef SUMA_RECURSIVA_H_
#define SUMA_RECURSIVA_H_

//la funcion principal que ejecuta la aplicacion suma recursiva
void sumaRecursiva();

//se rellena el array con valores arbitrarios
void inicializarArray(int array[], int longitud);

//se realiza la suma de los valores del array de forma recursiva
int sumarRecursivamente(int array[], int &longitud);

//realia la suma
int sumaR(int array[], int&longitud, int& contador_suma);

#endif /* SUMA_RECURSIVA_H_ */
