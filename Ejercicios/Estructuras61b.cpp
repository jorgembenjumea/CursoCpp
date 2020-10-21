//61 Ejercicio
/*

Ejercicio 6: Utilizar las 2 estructuras del problema 5,
pero ahora pedir los datos para N alumnos, y calcular 
cuál de todos tiene el mejor promedio, e imprimir sus datos.

Ejercicio 5: Hacer 2 estructuras una llamada promedio 
que tendrá los siguientes campos: nota1, nota2, nota3; 
y otro llamada alumno que tendrá los siguientes miembros:
nombre, sexo, edad; 
hacer que la estructura promedio este 
anidada en la estructura alumno,
luego pedir todos los datos
para un alumno, luego calcular su promedio, y por ultimo 
imprimir todos sus datos incluidos el promedio.
*/

#include<iostream>
#include<conio.h>
using namespace std;
struct Promedio{
	float nota1;
	float nota2;
	float nota3;
	float promedioNotas;
};

struct Alumno{
	char nombre[20];
	int edad;
	char sexo[10];
	struct Promedio prom;
}alumno1[100];

int main(){
	float promedioAlumno,mayor;
	int numAlumnos,posM;
	cout<<"Cuantos alumnos son: ";
	cin>>numAlumnos;
	
	for(int i=0;i<numAlumnos;i++){
	fflush(stdin);	
	cout<<"\nDigita tu nombre: ";
	cin.getline(alumno1[i].nombre,20,'\n');
	cout<<"Digite su sexo: ";
	cin.getline(alumno1[i].sexo,10,'\n');
	cout<<"Digite su edad: ";
	cin>>alumno1[i].edad;
	fflush(stdin);
	
	cout<<"\n:Nota del Alumno\n";
	cout<<"Nota1: ";cin>>alumno1[i].prom.nota1;
	cout<<"Nota2: ";cin>>alumno1[i].prom.nota2;	
	cout<<"Nota3: ";cin>>alumno1[i].prom.nota3;	
	
	alumno1[i].prom.promedioNotas =(alumno1[i].prom.nota1+alumno1[i].prom.nota2+alumno1[i].prom.nota3)/3;
	
	//Determinar el Mayor Salario
		if(alumno1[i].prom.promedioNotas>mayor){
			mayor=alumno1[i].prom.promedioNotas ;
			posM=i;
		}
	}

cout<<"\nEl promedio mayor lo tiene el alumno: "<<alumno1[posM].nombre<<"con un promedio de: " <<alumno1[posM].prom.promedioNotas;
for(int i=0;i<numAlumnos;i++){
	cout<<"\n ------Datos Alumno-------\n";
	cout<<"Nombre: "<<alumno1[i].nombre<<endl;
	cout<<"Edad: "<<alumno1[i].edad<<endl;
	cout<<"Sexo: "<<alumno1[i].sexo<<endl;
	cout<<"Promedio: "<<alumno1[i].prom.promedioNotas;
	cout<<endl;
}
	
	
	
	
	
	
	getch();
	return 0;
}

