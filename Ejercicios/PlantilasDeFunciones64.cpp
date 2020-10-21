//Plantillas de Funciones

//sacar el valor absoluto de un numero

#include<iostream>
#include<conio.h>
using namespace std;

//Prototipo de la Funcion
template <class TIPOD>
void mostrarAbs(TIPOD numero);


int main(){
	int num1=-4;
	float num2=-34.56;
	double num3=-123.345;
	
	mostrarAbs(num1);
	mostrarAbs(num2);
	mostrarAbs(num3);

	
	getch();
	return 0;
}

//Defenir Funcion
template <class TIPOD>
void mostrarAbs(TIPOD numero){
	if(numero<0){
		numero=numero*(-1);
	}
	cout<<"El valor absoluto del numero es:"<<numero<<endl;
	
	
}



