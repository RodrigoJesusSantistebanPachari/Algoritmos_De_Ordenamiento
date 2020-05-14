#include<iostream>
using namespace std;

void SelectionSort(int *Arreglo, int tamanio);
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
	SelectionSort(Arreglo,tamanio);
	cout<<"\n\nSu arreglo ordenado es: "<<endl;
	ImprimirArreglo(Arreglo,tamanio);
	
}

//SelectionSort
void SelectionSort(int *Arreglo, int tamanio){
	int min, aux;
	for(int i=0; i<tamanio; i++){
		min = i;
		for(int j=i+1;j<tamanio;j++){
			if(Arreglo[j]<Arreglo[min]){
				min=j;
			}
		}
		aux = Arreglo[i];
		Arreglo[i] = Arreglo[min];
		Arreglo[min] = aux;
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
