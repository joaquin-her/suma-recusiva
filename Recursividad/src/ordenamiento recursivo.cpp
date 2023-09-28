/*
 * ordenamiento recursivo.cpp
 *
 *  Created on: 28/09/2023
 *      Author: algo2
 */

void ordenamientoPorSeleccion(){
	/*
	 * El ordenamiento por seleccion realiza comparaciones hasta encontrar el minimo dentro de
	 * una lista de valores y lo coloca al frente de ella hasta el puesto n-1 descontando de cada
	 * iteracion el elemento que acaba de colocar en su lugar
	 */
	int longitud = 10;
	int arrayDeEnteros[longitud] = {10,9,2,23,56,6,-12,34,5,0};
	ordenarSelectivamente(arrayDeEnteros, longitud);

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
	intercambiarMaximos(array, longitud, punteroMaximo, punteroPosicion);

}

void intercambiarMaximos(array, longitud, punteroM, punteroP){

}
