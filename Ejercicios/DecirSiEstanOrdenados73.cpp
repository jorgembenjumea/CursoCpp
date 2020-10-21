

#include<iostream>
#include<conio.h>
using namespace std;

void PedirDatos();
void Comprobacion(int vec[],int);

int vec[100], tam;

int main(){
 
 PedirDatos();
 Comprobacion(vec,tam);
 
 getch();
 return 0;
}

void PedirDatos(){
 cout<<"Digite el tamaño del vector: ";
 cin>>tam; cout<<"\n";
 
 for(int i=0;i<tam;i++){
  cout<<i+1<<". Digite un numero: ";
  cin>>vec[i];
 }
}

void Comprobacion(int vec[],int tam){
 int aux = 1;
 
 for(int i=1;i<tam;i++){
  if(vec[i] >= vec[i-1]){
   aux += 1;
  }
 }
 
 if(aux == tam){
  cout<<"\nEl arreglo esta ordenado crecientemente."<<endl;
 }
 else{
  cout<<"\nEl arreglo NO esta ordenado crecientemente."<<endl;
 }
}
