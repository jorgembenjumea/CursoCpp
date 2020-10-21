//Menu
#include<iostream>
#include<conio.h>
using namespace std;

//Declaro estrucutra  articulos
	struct articulos{
		int codigo;
		char nombre[20];
		int precio;
		int precioMasIva;
		int cantidad;
		float iva;
	}productos[2];

//prototipo de la funcion
int comprobarCodigo(int x);

int main(){
	int op;
	while(op !=6){
	cout<<"1.Abastecer  Productos"<<endl;
	cout<<"2.Visualizar info producto"<<endl;
	cout<<"3.Vender Productos"<<endl;
	cout<<"4.Modificar un Producto"<<endl;
	cout<<"5.Estadisticas de Ventas"<<endl;
	cout<<"6.Salir"<<endl;
	cout<<"Digite una Opcion: ";
	cin>>op;
	
	
		switch(op){
		
		case 1:
			//Limpiamos pantalla con system("cls")
			system("cls");
			cout<<"HOla soy la opcion 1"<<endl;
			
		for(int i=0;i<2;i++){
		int primerDigito, codigoCorrecto;
		cout<<"+++++ Articulo "<<i+1<<"+++++\n";
		cout<<"Digita el Codigo 1:Papeleria  2:Supermercado 3:Drogueria: ";
		cin>>productos[i].codigo;
//comprobando que el numero del codigo sea mayor a 9
		comprobarCodigo(productos[i].codigo);


		fflush(stdin); //Vaciar el buffer y permitir digitar los valores
		cout<<"Digita el nombre: ";
		cin.getline(productos[i].nombre,20,'\n');
		
		cout<<"Digita el Precio: ";
		cin>>productos[i].precio;
		
		cout<<"Digita el Cantidad: ";
		cin>>productos[i].cantidad;
		//Saber el digito que empieza para asignarle el iva   1:Papeleria  2:Supermercado 3:Drogueria:
		primerDigito=(productos[i].codigo)/10;
		
		//Papeleria 16%
		if (primerDigito==1){
			productos[i].iva=0.16;
			productos[i].precioMasIva=productos[i].precio*1.16;
		}
		//Supermercado 4%
		if (primerDigito==2){
			productos[i].iva=0.04;
			productos[i].precioMasIva=productos[i].precio*1.04;
		}
		//Drogueria 12%
		if (primerDigito==3){
		   productos[i].iva=0.12;
		   productos[i].precioMasIva=productos[i].precio*1.12;
		}
		
		cout<<endl;
		
	}
			
			
			
			
			//Hacemos pausa y limpiamos pantall
			system("pause");
			system("cls");
			
		case 2: 
			//Limpiamos pantalla con system("cls")
			system("cls");
			cout<<"Hola soy la opcion 2"<<endl;
			system("pause");
			system("cls");			
}
	
}
	getch();
	return 0;
}






