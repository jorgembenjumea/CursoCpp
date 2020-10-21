/*
Escriba una funcion llamada mult() que acepte dos numeros con
un punto fotante como parametro, multiplique estos dos numeros
y despliegue el resultado
*/
#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
void mult(float x, float y);

float n1,n2;

int main(){
	pedirDatos();
	mult(n1,n2);

	getch();
	return 0;
	
}


void pedirDatos(){
	cout<<"Digite 2 Numeros: ";
	cin>>n1>>n2;
}

void mult(float x, float y){
	float multiplicacion=x*y;
	cout<<"La Multiplicacion da"<<multiplicacion;
	
}

