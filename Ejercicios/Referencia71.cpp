/*Escriba una funcion nombrada tiempo() que tenga un parametro
en número entero llamado totalsegundo y tres parametros de 
referencia enteros nombrados horas, min y seg.
la funcion  debera convertir el numero de segundo trasmitido en numero
equivalente de horas, minutos y segundos.
*/

#include<iostream>
#include<conio.h>
using namespace std;

void tiempo(int,int&,int&,int&);

int main(){
	int totalSeg,horas,min,seg;
	cout<<"Digite el numero total de segundos: ";
	cin>>totalSeg;
	
	tiempo(totalSeg,horas,min,seg);
	cout<<"Tiempo equivalente a la cantidad de segundos digitados: "<<endl;
	cout<<"Horas: "<<horas<<endl;
	cout<<"Minutos: "<<min<<endl;
	cout<<"Segundos: "<<seg<<endl;
	
	
	getch();
	return 0;
}
void tiempo(int totalSeg,int& horas,int& min,int& seg){
	horas=totalSeg/3600;
	totalSeg=totalSeg%3600;
	min=totalSeg/60;
	seg=totalSeg%60;
}
