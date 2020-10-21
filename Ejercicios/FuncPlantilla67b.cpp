/*67b
Escriba una plantilla de función llamada maximo() que
devuleva el valor maximo de tres argumentos que se trasmitan
a la funcion cuando sea llamada.
suponga que los tres argumentos serán del mismo tipo de 
dato.
*/
#include<iostream>
#include<conio.h>
using namespace std;

//Declaro la pantilla de funcion para que reciba cualquier tipo de dato
template <class TIPOD>
//Declaro la funcion maxi
TIPOD maximo(TIPOD n1,TIPOD n2,TIPOD n3);


int main(){
	
	
	maximo(3.44,54,2.1);
	getch();
	return 0;
}

TIPOD maximo(TIPOD n1,TIPOD n2,TIPOD n3){
	if((n1>n2)&&(n1>n3)){
		cout<<"el Valor maximo es: "<<n1;
	}else if((n2>n1)&&(n2>n3)){
		cout<<"el Valor maximo es: "<<n2;
	}else {
		cout<<"el Valor maximo es: "<<n3;
	}
}
