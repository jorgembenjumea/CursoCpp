//Concatenar cadenas
/*
crear un acadena que tenga las siguientes
frases "Hola que tal" y luego crea otra cadena
para preguntarle al usuario usuario su nombre, 
por ultimo añandir el nombre al final de la 
primera cadena mostrando el mensaje completo

Hola  que tal (Nombre Usuario)
*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	
	char saludo[]="Hola que tal ";
	char nombre[30];
	char concatenar[40];
	
	cout<<"introduce tu nombre es: ";
	cin.getline(nombre,30,'\n');
	strcpy(concatenar,saludo);



	
	
	
	
	
	getch();
	return 0;
}