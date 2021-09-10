#include<iostream>
#include<stdlib.h>

using namespace std;


//Variables globales
int limInferior = 0;
int limSuperior = 0;


//Prototipo de funciones
void solicitarDatos();
void imprimirSerieNumerica();

//Funcion principal
int main(){
	solicitarDatos();
	imprimirSerieNumerica();
	
	cout<<"Adios"<<endl;
	
	system("pause");
	return 0;
}

void solicitarDatos(){
	cout<<"Introduzca el limite inferior: ";
	cin>>limInferior;
	cout<<"Introduzca el limite superior: ";
	cin>>limSuperior;
	
	while(limInferior > limSuperior){
		cout<<"\nEl limite inferior no puede ser mayor que el limite superior, vuelva a ingresar los valores"<<endl;
		cout<<"Introduzca el limite inferior: ";
		cin>>limInferior;
		cout<<"Introduzca el limite superior: ";
		cin>>limSuperior;	
	}
	
	cout<<""<<endl;
}

void imprimirSerieNumerica(){
	string parOImpar = "";
	
	for(int i = limSuperior;i >= limInferior;i--){
		if(i % 2 == 0){
			parOImpar = "(par)";
		}else{
			parOImpar = "(impar)";
		}
		
		if(i == 0){
			parOImpar = "(numero neutro)";
		}
		
		if(i == limInferior){
			cout<<i<<parOImpar<<endl;
		}else{
			cout<<i<<parOImpar<<" - ";	
		}
	}
	cout<<""<<endl;
}












