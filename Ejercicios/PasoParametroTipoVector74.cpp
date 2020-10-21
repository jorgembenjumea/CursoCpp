/*Realizar una funcion que tome como parametro un vector de 
números y su tamaño  y cambie el signo de los elementos del vector
*/

#include<conio.h>
#include<iostream>
using namespace std;
//declara el prototico
void cambiaSignos(int vec[],int);
void pedirDatos();
//Declaro Variables Globales
int vector[100],tam;

int main(){

	pedirDatos();
	cambiaSignos(vector,tam);
	
	getch();
	return 0;
}
void cambiaSignos(int vec[],int){
	for(int i=0;i<tam;i++){
		vec[i]*=-1;
		cout<<vec[i]<<" ";
	}
	
}

void pedirDatos(){
	cout<<"Digiete el tamaño del vector";
	cin>>tam;
	for(int i=0;i<tam;i++){
		cout<<"Digite  numero "<<i+1<<": ";
		cin>>vector[i];
	}
}
