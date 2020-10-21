#include<iostream>

using namespace std;

int main(){
	int opciones,codigo,menuUno,menuDos,precioDr,cantidadDr,precioTi,cantidadTi,precioFar,cantidadFar;
	int  totalDineroVentas,productoMenosVendido,productoMasVendido,mostrarProdTi,mostrarProdDrog,mostrarProdFar;
	char productoFar[10],productoTi[10],productoDr[10];
	
	
	cout<<"1.Abastecer  Productos"<<endl;
	cout<<"2.Visualizar info producto"<<endl;
	cout<<"3.Vender Productos"<<endl;
	cout<<"4.Modificar un Producto"<<endl;
	cout<<"5.Estadisticas de Ventas"<<endl;
	cout<<"6.Salir"<<endl;
	cin>>opciones;
	
	switch(opciones){
		
		case 1:
			cout<<"Abastecer  Productos"<<endl;
			cout<<"1.Droguerria"<<endl;
			cout<<"2.Tienda"<<endl;
			cout<<"3.Farmacia"<<endl;
			cin>>menuUno;
			
			switch(menuUno){
				case 1:
					cout<<"Ingrese producto, precio, cantidad"<<endl;
					cin>>productoDr>>precioDr>>cantidadDr;
				case 2:
					cout<<"Ingrese producto, precio, cantidad"<<endl;
					cin>>productoTi>>precioTi>>cantidadTi;
					
				case 3:
					cout<<"Ingrese producto, precio, cantidad"<<endl;
					cin>>productoFar>>precioFar>>cantidadFar;
			}
			
			
		case 2:
			cout<<"Visualizar info producto"<<endl;
			cout<<"1.Visualizacion productos Drogeria" <<endl;
			cout<<"2.Visualizacion productos Tienda"<<endl;
			cout<<"3.Visualizacion productos Farmacia"<<endl;
			cin>>menuDos;
			
			switch(menuDos){
				case 1:
					cout<<"Visualizacion productos Drogueria" <<endl;
					cout<<mostrarProdDrog;
				case 2:
					cout<<"Visualizacion productos Tienda"<<endl;
					cout<<mostrarProdTi;
					
				case 3:
					cout<<"Visualizacion productos Farmacia"<<endl;
					cout<<mostrarProdFar;
			}
			
			
			
		case 3:
			cout<<"Vender Productos"<<endl;
			cout<< "Ingrese Codigo del Producto,Nombre,Precio,Cantidad"<<endl;
			cin>>codigo;
			
		case 4:
			cout<<"Modificar un Producto"<<endl;
			cout<<"Ingrese el codigo del elemento que desea modificar"<<endl;
			cin>>codigo;
			
		case 5:
			cout<<"Estadisticas de Ventas"<<endl;
			cout<<"1.Productos mas vendido"<<endl;
			cout<<"2.Producto menos vendido"<<endl;
			cout<<"3.Cantidad total de dinero de ventas"<<endl;
			cout<<"4.Cantidad de dinero promedio obtenido por unidad de producto vendido"<<endl;
			
			switch(menuTres){
				case 1:
					cout<<"Productos mas vendido es:"<<productoMasVendido<<endl;
		
				case 2:
					cout<<"2.Producto menos vendido"<<productoMenosVendido<<endl;
					
				case 3:
					cout<<"Cantidad total de dinero de ventas"<<totalDineroVentas<<endl;
					
			}
			
		case 6:
			break;
			
		default:
			cout<<"no esta en el rango de 1 a 6"<<endl;
		
	}
	
	return 0;
	
	
}
