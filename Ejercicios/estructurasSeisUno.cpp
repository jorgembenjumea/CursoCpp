
edwin ponguta
Hace 2 meses
#include<iostream>
#include<conio.h>

using namespace std;

struct promedio{
	float nota[3];
}prom[100];

struct alumno{
	char nombre[30];
	char sexo[10];
	int edad;
	struct promedio promedios;
}alum[100];

int main(){
	int cantidad=0,pos=0;
	float prom_nota[100],sum[100],mayor=0;
	cout<<"Digite la cantidad de alumnos: ";
	cin>>cantidad;

	for(int i=0;i<cantidad;i++){
		fflush(stdin);
		cout<<"\nDatos de alumno "<<i+1<<": "<<endl;
		cout<<"Nombre: ";
		cin.getline(alum[i].nombre,30,'\n');
		cout<<"Sexo: ";
		cin.getline(alum[i].sexo,10,'\n');
		cout<<"Edad: ";
		cin>>alum[i].edad;
		for(int j=0;j<3;j++){
			cout<<"Nota "<<j+1<<": ";
			cin>>alum[i].promedios.nota[j];
			sum[i] += alum[i].promedios.nota[j];
			prom_nota[i] = sum[i] / 3;
		}
		if(prom_nota[i] > mayor){
			mayor = prom_nota[i];
			pos = i;
		}
	}cout.precision(3);
		cout<<"\nAlumno "<<pos+1<<" tiene el mejor promedio"<<" "<<mayor<<endl;
		cout<<"Nombre: "<<alum[pos].nombre<<endl;
		cout<<"Sexo: "<<alum[pos].sexo<<endl;
		cout<<"Edad: "<<alum[pos].edad<<endl;
		for(int z=0;z<3;z++){
			cout<<"Nota "<<z+1<<": "<<alum[pos].promedios.nota[z]<<endl;
		}
	getch();
	return 0;
}



