/*Escriba una funcion llamada al_cuadrado() que 
calcule el cuadrado del valor que se le trasmite  y despliegue
el resultado. La funcion deberá ser capaz de elevar al 
cuadrado numeros flotantes.
*/
#include<iostream>
#include<conio.h>
using namespace std;

//prototipo de la funcion
void pedirDatos();
void elevarCuadrado(float x);
//Declara variables Globales
float num;
int main(){
	
	pedirDatos();
	elevarCuadrado(num);
	
	getch();
	return 0;
}
void pedirDatos(){
	cout<<"Digite un numero: ";
	cin>>num;
}
void elevarCuadrado(float x){
	float cuadrado;
	cuadrado=x*x;
	cout<<"El resultado es: "<<cuadrado;
}
