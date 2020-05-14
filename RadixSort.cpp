#include<iostream>
using namespace std;

void RadixSort(int *Arreglo, int tamanio);
void CountingSort(int *Array, int size, int place);
int getMax(int *Arreglo, int tam);
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
	RadixSort(Arreglo,tamanio);
	cout<<"\n\nSu arreglo ordenado es: "<<endl;
	ImprimirArreglo(Arreglo,tamanio);
	
}

int getMax(int *Arreglo, int tam) {
  int max = Arreglo[0];
  for (int i = 1; i < tam; i++)
    if (Arreglo[i] > max)
      max = Arreglo[i];
  return max;
}

void CountingSort(int *array, int size, int place) {
  const int max = 10;
  int output[size];
  int count[max];

  for (int i = 0; i < max; ++i)
    count[i] = 0;

  for (int i = 0; i < size; i++)
    count[(array[i] / place) % 10]++;

  for (int i = 1; i < max; i++)
    count[i] += count[i - 1];

  for (int i = size - 1; i >= 0; i--) {
    output[count[(array[i] / place) % 10] - 1] = array[i];
    count[(array[i] / place) % 10]--;
  }
  
  for (int i = 0; i < size; i++)
    array[i] = output[i];
}


//RadixSort
void RadixSort(int *Arreglo, int tamanio) {
  int max = getMax(Arreglo, tamanio);
  for (int place = 1; max / place > 0; place *= 10)
    CountingSort(Arreglo, tamanio, place);
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
