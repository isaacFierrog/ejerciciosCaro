#include<iostream>
#include<stdlib.h>

using namespace std;

//Declaracion de variables gloables
int sumaEnteros = 0;
int nuevoEntero = 0;

//Prototipo de funciones
int solicitarEnteros();

//Funcion principal
int main(){
	while(true){
		system("cls");
		nuevoEntero = solicitarEnteros();
		
		if(nuevoEntero < 0){
			break;
		}
		
		sumaEnteros += nuevoEntero;
		cout<<"El valor actual de la suma es: "<<sumaEnteros<<endl;
	}
	
	cout<<"La suma total de los numero enteros es: "<<sumaEnteros<<endl;
	
	system("pause");
	return 0;
}

int solicitarEnteros(){
	int numero = 0;
	
	cout<<"Introduzca un numero entero: ";
	cin>>numero;	
	
	return numero;
}
