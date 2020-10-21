/* REalice una funcion que tome como parametro un vector
y su tamaño y diga si el vector esta ordenado crecientemente
sugerencia:compruebe que para todas las posiciones del vector,
salvo para 0, el elemento del vector es mayor o igual que
el elemento que procede en el vector.

Prototipo de la funcion
	void  nombreDeFuncion(tipo nombreArreglo[],int);
	
	
*/
#include<iostream>
#include<conio.h>
using namespace std;
//Prototipo de Funciones
void ordenarVector(int vec[],int);

int main(){
	int vector[]={1,2,3,6,5};
	//nombreDeFuncion(nombreArreglo,tamañoArreglo)
	ordenarVector(vector,5);

	
	getch();
	return 0;
}

//	void nombreDeFuncion(tipo nombreArreglo[],int tamañoArreglo);

void ordenarVector(int vec[],int tam){
	int aux=1;
	for(int i=1;i<tam;i++){
		if(vec[i]>vec[i-1]){
			aux+=1;
		}
	}
	if(aux==tam){
		cout<<"El vector esta ordenado"<<endl;
	}else{
		cout<<"El Vector no esta ordenado"<<endl;
	}
}




