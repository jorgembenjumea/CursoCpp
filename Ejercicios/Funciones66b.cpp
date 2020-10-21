/*Escriba un programa en C++ que devuleva la parte
fraccionaria de cualquier numero introduccido por el 
usuario eje:
si introduce 256.879, deberia desplegar el numero 0.879
*/
#include<iostream>
#include<conio.h>
using namespace std;
//Prototipos de Funciones
void pedirDatos();
void fraccion(float num);

float num;
int parteEntera;

int main(){
	pedirDatos();
	fraccion(num);
	
	getch();
	return 0;
}
void fraccion(float numLargo){
	int parteEntera;
	float parteDecimal;
	
	parteEntera= numLargo/1;
	parteDecimal=numLargo-parteEntera;
	cout<<"la Parte Decimal es: "<<parteDecimal;
}

void pedirDatos(){
	cout<<"introduce un numero con parte decimal: ";
	cin>>num;
}


