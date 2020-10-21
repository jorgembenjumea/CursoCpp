/*Hacer una estructura llamada corredor,en la cual se 
tendra  los siguientes campos: 
Nombre
edad
club
pedir datos del usuario para corredor, y asignar una
categoria de competicion:
-juvenil <= 18 años
-señor <=40 años
-Veterano > 40 años
Posteriormente imprimir todos los daos del corredor, 
incluido su categoria de competicion.

*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct corredor{
	char nombre[20];
	int edad;
	char sexo[10];
	char club[20];
	char categoria[20];
	
}c1;

int main(){
	char categoria[20];
	cout<<"Digite el nombre: ";
	cin.getline(c1.nombre,20,'\n');
	cout<<"Digite la edad: ";
	cin>>c1.edad;
	fflush(stdin);
	cout<<"Digie el sexo: ";
	cin.getline(c1.sexo,10,'\n');
	cout<<"Digiete el Club: ";
	cin.getline(c1.club,20,'\n');
	
	if(c1.edad<=18){
		strcpy(categoria,"Juvenil");
		//cin.getline(c1.categoria,20,'\n');
	}else if(c1.edad<=40){
		strcpy(categoria,"Senior");
		//cin.getline(c1.categoria,20,'\n');
		
	}else{
		strcpy(categoria,"Veterano");
		//cin.getline(c1.categoria,20,'\n');
	}
	
	cout<<"El nombre es: "<<c1.nombre<<endl;
	cout<<"La edad es: "<<c1.edad<<endl;
	cout<<"El sexo es: "<<c1.sexo<<endl;
	cout<<"El Club es: "<<c1.club<<endl;
	cout<<"Categoria es:"<<categoria<<endl;
	
	getch();
	return 0;
}
