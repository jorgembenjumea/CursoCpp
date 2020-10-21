//Busquda secuencial
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int a[]={3,4,5,2,9};
	int i,dato;
	char bandera='F'; //Badear inicializada en falso
	dato=12;
	//Busqueda Secuencial
	i=0;
	while((bandera=='F')&&(i<5)){
		if(a[i]==dato){
			bandera='V';
		}
		i++;
	}
	if(bandera=='F'){
		cout<<"El Numero a buscar no existe en el arreglo"<<endl;
	}else if(bandera =='V'){
		cout<<"el Numero a sido encontrado en la Pos: "<<i-1<<endl;
	}
	
	getch();
	return 0;
}
