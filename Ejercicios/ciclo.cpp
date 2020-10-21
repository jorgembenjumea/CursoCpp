#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main()
{

int NE,i=0;
char R;
string vector[50];

do{

cout<<"1.Introducir articulo\n2.Modificar un articulo\n3.Eliminar un articulo\n4.Listar el inventario\n5.Listar inventario de productos agotados\n6.Salir del programa\n";
cin>>NE;
system("cls");


switch(NE){
    case 1:
        i++;

        cout<<"Ingrese nombre del articulo\n";
        cin>>vector[i];


        cout<<"El nombre de articulo es:"<<vector[i]<<"\n";
            break;



    default:
    cout<<"Opcion aun no disponible\n"; 



    }
    system("pause");
    system("cls");
    cout<<"Desea regresar al menu principal?\n";
    cout<<"Y. N.\n";
    cin>>R; 
}while(R=='Y');

system("pause");
return 0;
}
