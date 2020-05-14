#include<iostream>
using namespace std;

void InsertionSort(int *Arreglo, int tamanio);
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
	InsertionSort(Arreglo,tamanio);
	cout<<"\n\nSu arreglo ordenado es: "<<endl;
	ImprimirArreglo(Arreglo,tamanio);
	
}

//Insertion Sort
void InsertionSort(int *Arreglo, int tamanio){
	int aux, pos;
	for(int i=0; i<tamanio; i++){
		pos = i;
		aux = Arreglo[i];
		while((pos>0) && (Arreglo[pos-1]>aux)){
			Arreglo[pos] = Arreglo[pos-1];
			pos--;
		}
		Arreglo[pos] = aux;
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
