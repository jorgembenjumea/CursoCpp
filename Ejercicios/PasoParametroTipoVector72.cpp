/*Paso de parametro de tipo vector

Parametro de la funcion:
	void nombreDeFuncion(tipo nombreArreglo[],int tamañoArreglo)
	
llamada a la funcion:
	nombreDeFuncion(nombreArreglo,tamañoArreglo)
	
Programa una funcion que reciba como parametro un vector
y eleve los numeros que tiene el vector al cuadrado
*/

//Cuadrados de los elementos de un vector

#include<iostream>
#include<conio.h>

using namespace std;
//Prototipo de la funcion
void cuadrado(int vector[],int);
void muestra(int vector[],int);


int main(){
	//El tamaño no puede variar debe ser constate
	const int TAM=5;
	int vec[]={1,2,3,4,5};
	//Funcion para elevar al cuadrado
	cuadrado(vec,TAM);
	//Funcion para mostrar los nuevos valores vector
	muestra(vec,TAM);
	
	getch();
	return 0;
}
void cuadrado(int vec[],int tam){
	for(int i=0; i<tam;i++){
		vec[i]=vec[i]*vec[i];
		//vec[i]*=vec[i]; se puede escribir de esta forma	
	}
}
void muestra(int vec[],int tam){
	for(int i=0;i<tam;i++){
		cout<<vec[i]<<" ";
	}
}
