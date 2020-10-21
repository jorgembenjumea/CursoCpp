/*Lea seis valores con decimales. Después imprima
cuántos de ellos son positivos. En la siguiente línea
muestre el promedio de los valores positivos, con un dígito decimal. 
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	float valor1,valor2,valor3,valor4,valor5,valor6,promedio,cuentaValor;
	cout<<"Digite 1 valores: ";
	cin>>valor1;
	if(valor1>0){
		cuentaValor+=1;
		promedio+=valor1;
	}
	cout<<"Digite 2 valores: ";
	cin>>valor2;
	if(valor2>0){
		cuentaValor+=1;
		promedio+=valor2;
	}
	cout<<"Digite 3 valores: ";
	cin>>valor3;
	if(valor3>0){
		cuentaValor+=1;
		promedio+=valor3;
	}
	cout<<"Digite 4 valores: ";
	cin>>valor4;
	if(valor4>0){
		cuentaValor+=1;
		promedio+=valor4;
	}
	cout<<"Digite 5 valores: ";
	cin>>valor5;
	if(valor5>0){
		cuentaValor+=1;
		promedio+=valor5;
	}
	cout<<"Digite 6 valores: ";
	cin>>valor6;
	if(valor6>0){
		cuentaValor+=1;
		promedio+=valor6;
	}

cout<<"hay "<<cuentaValor<<" Valores Positivos"<<endl;
cout<<"El promedio de los valores positivos es: "<<promedio/cuentaValor;
	
	
	
	//cin<<valor1<<valor2<<valor3<<valor4<<valor5<<valor6;
	

	
	
	
	
	
	
	
	getch();
	return 0;
}
