#include<iostream>
#include<stdlib.h>

using namespace std;


//Variables globales
const int numeroPeliculas = 3;
int precioPeliculas[numeroPeliculas];
int total = 0;
int descuento = 0;
int totalConDescuento = 0;
int indexPrecioMayor = 0;


//Prototipo de funciones
int mostrarMenu();
void solicitarPeliculas();
void determinarCostos();
void imprimirCostos();

//Funcion principal
int main(){
	while(mostrarMenu() != 2){
		solicitarPeliculas();
		determinarCostos();
		imprimirCostos();
	}	
	
	cout<<"Adios"<<endl;
	
	system("pause");
	return 0;
}

int mostrarMenu(){
	int opcion = 0;
	
	cout<<"INTRODUZCA EL NUMERO DE LA ACCION QUE DESEA REALIZAR"<<endl;
	cout<<"1.- Cobrar peliculas"<<endl;
	cout<<"2.- Terminar programa"<<endl;
	cout<<"Introduzca la opcion: ";
	cin>>opcion;
	
	while(opcion < 1 || opcion > 2){
		cout<<"La opcion elegida no existe, por favor intentalo de nuevo"<<endl;
		cin>>opcion;
	}
	cout<<""<<endl;
	
	return opcion;
}

void solicitarPeliculas(){
	for(int i = 0;i < numeroPeliculas;i++){
		cout<<"Introduzca el precio de la "<<i + 1<<" pelicula: ";
		cin>>precioPeliculas[i];
	}
	cout<<""<<endl;	
}

void determinarCostos(){
	int precioMayor = 0;
	
	//Suma de los precios
	for(int i = 0;i < numeroPeliculas;i++){
		total += precioPeliculas[i];
	}
	
	//Posicion del precio mayor
	for(int i = 0;i < numeroPeliculas;i++){
		if(precioPeliculas[i] > precioMayor){
			precioMayor = precioPeliculas[i];
			indexPrecioMayor = i;
		}
	}
	
	//Determinar descuento
	for(int i = 0;i < numeroPeliculas;i++){
		if(i == indexPrecioMayor){
			continue;
		}else{
			descuento += precioPeliculas[i]; 
		}
	}
	
	totalConDescuento = total - descuento;
}

void imprimirCostos(){
	cout<<"El valor total de las peliculas es: "<<total<<endl;
	cout<<"El descuento es de: "<<descuento<<endl;
	cout<<"El total neto es de: "<<totalConDescuento<<endl;
	cout<<""<<endl;
}













