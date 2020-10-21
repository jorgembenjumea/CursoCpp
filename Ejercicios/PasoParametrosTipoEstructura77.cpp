//77. Paso de parametros tipo estructura

#include<iostream>
#include<conio.h>
using namespace std;

//definir estructura
struct Persona{
	char nombre[30];
	int edad;
}p1;

//Prototipo 
void pedirDatos();
void mostrarDatos(Persona);

int main(){
	pedirDatos();
	mostrarDatos(p1);
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digita tu nombre: ";
	cin.getline(p1.nombre ,30,'\n');
	cout<<"Digita tu edad: ";
	cin>>p1.edad;
}
void mostrarDatos(Persona p){
	cout<<"\n Nombre: "<<p.nombre<<endl;
	cout<<"Edad: "<<p.edad<<endl;
}
