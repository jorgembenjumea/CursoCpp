#include<iostream>
#include<conio.h>
using namespace std;

//funcion (por valor)
int suma1(int n){
	return n+1;
}
//Acción (por referencia)
void incrementa(int& n){
	n=n+1;
}

int main(){
	int a=1, b=2, c;
	suma=suma1(a);
	incrementa(b);
	cout<<c<<" "<<b<<endl;
}
