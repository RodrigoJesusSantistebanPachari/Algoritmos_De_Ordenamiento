#include<iostream>
using namespace std;

void swap(int *a, int *b);
int Particion(int *arr, int low, int hight); 
void QuickSort(int *arr, int low, int hight);
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
	QuickSort(Arreglo,0,tamanio-1);
	cout<<"\n\nSu arreglo ordenado es: "<<endl;
	ImprimirArreglo(Arreglo,tamanio);
	
}

void swap(int* a, int* b){  
    int t = *a;  
    *a = *b;  
    *b = t;  
}  

int Particion (int *arr, int low, int high)  {  
    int pivot = arr[high];  
    int i = (low - 1); 
  
    for (int j = low; j <= high - 1; j++){  
        if (arr[j] < pivot){  
            i++; 
            swap(&arr[i], &arr[j]);  
        }  
    }  
    swap(&arr[i + 1], &arr[high]);  
    return (i + 1);  
}  

//Quick Sort
void QuickSort(int *arr, int low, int high){  
    if (low < high){  
        int pi = Particion(arr, low, high);  
        QuickSort(arr, low, pi - 1);  
        QuickSort(arr, pi + 1, high);  
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
