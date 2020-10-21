/*Usando la siguiente tabla, escriba un programa que lea un código
y la cantidad de ellos a comprar. Después muestre el valor a pagar.
Este es un programa muy simple con la intención de practicar
instrucciones y comandos en estructuras selectivas. 
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int codigo;
	float cantidad;
	
	cout<<"--------------------------------------------------------"<<endl;
	cout<<"   CODE		SPECIFICATION           	PRICE"<<endl;
	cout<<"--------------------------------------------------------";
	cout<<" \n 1	.	Cachorro Quente	.	.	R$ 4.00";
	cout<<" \n 2	.	X-Salada	.	.	R$ 4.50";
	cout<<" \n 3	.	X-Bacon		.	.	R$ 5.00";
	cout<<" \n 4	.	Torrada Simples	.	.	R$ 2.00";
	cout<<" \n 5	.	Refrigerate	.	.	R$ 1.50";
	cout<<"\n--------------------------------------------------------";
	cout<<"\nDigite el codigo: ";
	cin>>codigo;
	cout<<"\nDigite la cantidad: ";
	cin>>cantidad;
	
	switch(codigo){
		case 1:
			cout<<"Total: "<<cantidad*4;
			break;
		case 2:
			cout<<"Total: "<<cantidad*4.5;
			break;
		case 3:
			cout<<"Total: "<<cantidad*5;
			break;
		case 4:
			cout<<"Total: "<<cantidad*2;
			break;
		case 5:
			cout<<"Total: "<<cantidad*1.5;
			break;
	}
	
	
getch();
return 0;	
}
