/*
Ejercicio 3: Realizar un programa que lea un arreglo
de estructuras los datos de N empleados de la empresa
y que imprima los datos del empleado con mayor y menor salario.

*/

#include<iostream>
#include<conio.h>

struct empleado{
	char nombre[20];
	float salario;
	
}emp[100];

using namespace std;

int main(){
	int nEmpleados,posM, posm;
	float mayor=0, menor=99999;
	cout<<"cuantos usuarios va a ingresar: ";
	cin>>nEmpleados;
	
	for(int i=0;i<nEmpleados;i++){
		fflush(stdin);
		cout<<i+1<<".Digite el nombre del empleado: ";
		cin.getline(emp[i].nombre,20,'\n');
		cout<<"Digite su salario: ";
		cin>>emp[i].salario;
		
		
		//Determinar el Mayor Salario
		if(emp[i].salario>mayor){
			mayor=emp[i].salario;
			posM=i;	
		}
		//Empleado con menor salario
		if(emp[i].salario<menor){
			menor=emp[i].salario;
			posm=i;
		}
	}
	
	cout<<"\nEl empleado con Mayor salario\n";
	cout<<"Nombre: "<<emp[posM].nombre<<endl;
	cout<<"Salario: "<<emp[posM].salario<<endl;
	
		cout<<"\nEl empleado con Menor salario\n";
	cout<<"Nombre: "<<emp[posm].nombre<<endl;
	cout<<"Salario: "<<emp[posm].salario<<endl;
	
	
	
	
	getch();
	return 0;
}
