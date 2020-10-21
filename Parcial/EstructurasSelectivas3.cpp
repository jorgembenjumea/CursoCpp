/*
3. En este problema usted debe leer 3 palabras. Estas palabras definen un animal de acuerdo
a la siguiente gráfica de izquierda a  derecha. Muestre el animal seleccionado por esas tres
palabras. 
Recuerde que si no se toman las palabras adecuadas debe de mostrar un mensaje
determinando un error.
*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	string dato1,dato2,dato3;
	cout<<"Introduce 3 Palabras: "<<endl;
	cin>>dato1>>dato2>>dato3;

	
	if(dato1=="Vertebrado"){
		if(dato2=="Ave"){
			if(dato3=="Carnivoro"){
				cout<<"aguia";
			}else if(dato3=="Omnivoro"){
				cout<<"pomba";
			}
		}else if(dato2=="Mamifero"){
			if(dato3=="Omnivoro"){
				cout<<"homem";
			}else if(dato2=="Herbivoro"){
				cout<<"Vaca";
			}
		}
		
	}else if(dato1=="Invertebrado"){
		if(dato2=="Insecto"){
			if(dato3=="Hematofago"){
				cout<<"Pulga";
			}else if(dato3=="Omnivoro"){
				cout<<"Lagarta";
			}
		}else if(dato2=="aniledero"){
			if(dato3=="Omnivoro"){
				cout<<"minhoca";
			}else if(dato2=="Hematofago"){
				cout<<"Sanguiessaga";
			}
		}
	}

getch();
return 0;
	
}
