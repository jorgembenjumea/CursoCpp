//Funciones
#include<iostream>
#include<conio.h>

using namespace std;

//Prototipo de la funcion
int encontrarMax(int x, int y);

int main(){
	int n1,n2,mayor;
	cout<<"Digita dos numeros;"<<endl;
	cin>>n1>>n2;
	mayor=encontrarMax(n1,n2);
	cout<<"El Mayor de los dos numeros es:"<<mayor;
	
	
	getch();
	return 0;
	
}


int encontrarMax(int x, int y){
	int numMax;
	if(x>y){
		numMax=x;
	}else{
		numMax=y;
	}
	return numMax;
	
}
