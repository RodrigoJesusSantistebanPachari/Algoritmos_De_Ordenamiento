#include<iostream>
using namespace std;

void CountingSort(int *Arreglo, int tamanio, int rango);
void LlenarArreglo(int *Arreglo, int tamanio);
void ImprimirArreglo(int *Arreglo, int tamanio);


//Funcion Principal
int main(){
	int  *Arreglo, tamanio;
	cout<<"Ingrese el tamanio de su arreglo "; cin>>tamanio;
	Arreglo = new int[tamanio];
	LlenarArreglo(Arreglo, tamanio);
	cout<<"\nSu arreglo es:"<<endl;
	ImprimirArreglo(Arreglo, tamanio);
	
	CountingSort(Arreglo,tamanio, 100);
	cout<<"\n\nSu arreglo ordenado es: "<<endl;
	ImprimirArreglo(Arreglo,tamanio);
}

//CountinSort
void CountingSort(int *ArregloEntrada, int tamanio, int rango){
	int ArregloSalida[tamanio];
	int ArregloAuxiliar[rango];
	
	for(int i=0; i<rango; i++){
		ArregloAuxiliar[i]=0;
	}
	
	for(int i=0; i<tamanio;i++){
		++ArregloAuxiliar[ArregloEntrada[i]];
	}
	
	for(int i=1;i<rango;i++){
		ArregloAuxiliar[i]=ArregloAuxiliar[i]+ArregloAuxiliar[i-1];
	}
	
	for(int i=0;i<tamanio; i++){
		ArregloSalida[--ArregloAuxiliar[ArregloEntrada[i]]] = ArregloEntrada[i];
	}
	
	for(int i=0;i<tamanio;i++){
		ArregloEntrada[i]=ArregloSalida[i];
	}
}

//Funcion para llenar el Arreglo
void LlenarArreglo(int *Arreglo, int tamanio){
	for(int i=0; i<tamanio; i++){
		cout<<"\nIngrese un numero para su Arreglo["<<i<<"] " ; cin>>Arreglo[i];
	}
}

//Funcion para mostrar el arreglo
void ImprimirArreglo(int *Arreglo, int tamanio){
	cout<<endl;
	for(int i=0; i<tamanio; i++){
		cout<<Arreglo[i]<<"   ";
	}
}
