#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
/*
	struct articulos{
		int codigo;
		char nombre[20];
		int precio;
		int cantidad;
	}producto1;
*/

struct Persona{
	char nombre[20];
	int edad;
}persona1;


int main(){
	
cout<<"Nombre 1: ";
cin.getline(persona1.nombre,20,'\n');
cout<<"Edad: ";
cin>>persona1.edad;

cout<<"\nImprimiendo Datos\n";
cout<<"Nombre: "<<persona1.nombre;
cout<<"Edad: "<<persona1.edad;

	
	getch();
	return 0;
}
