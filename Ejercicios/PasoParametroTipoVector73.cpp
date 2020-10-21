/*REalizar una funcion que tome como parametro un vector 
de numeros enteros que introducira el usuario
 y devuelva la suma de sus elementos.

Prototipo de la funcion
	void  nombreDeFuncion(tipo nombreArreglo[],int);
	
Parametro de la funcion:
	void nombreDeFuncion(tipo nombreArreglo[],int tamañoArreglo);
	
llamado de la Funcion
	nombreDeFuncion(nombreArreglo,tamañoArreglo)
*/


#include<iostream>
#include<conio.h>
using namespace std;
//Prototipo de la funcion
void pedirDatos();
int sumaVector(int vec[],int);
//Declaro variables de tipo Global
int tam, vec[100];

int main(){
	
	pedirDatos();
	cout<<"La suma de los elementos del vector es: "<<sumaVector(vec,tam)<<endl;

	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite el numero de elementos del vector: ";
	cin>>tam;
	for(int i=0;i<tam;i++){
		cout<<i+1<<". Digite un numero: ";
		cin>>vec[i];
	}
}

int sumaVector(int vec[],int){
	int suma=0;
	for(int i=0;i<tam;i++){
	   suma+=vec[i];
	}
	return suma;
}





