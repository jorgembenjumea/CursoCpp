/*Escriba una funcion nombrada funpot() que eleve un n�mero
entero que se le trasmita  a una potencia en n�mero entero 
postivo y despliegue el resultado.
El numero entero positivo deber� ser el segundo valor trasmitido
de la funcion*/

#include<iostream>
#include<conio.h>
using namespace std;

//Prototipo de Funciones
void pedirDatos();
void funPot(int x, int y);

//declaro variables Globales
int numero, exponente;

int main(){
	pedirDatos();
	funPot(numero,exponente);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite un numero: ";
	cin>>numero;
	cout<<"Digite el Exponente: ";
	cin>>exponente;
}
void funPot(int x, int y){
	long resultado=1;
	for(int i=1;i<=y;i++){
		resultado=resultado*x;
	}
	cout<<"El resultado es: "<<resultado;
}


