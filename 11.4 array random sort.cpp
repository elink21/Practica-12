#include<iostream>
#include <locale>
#include<time.h>
#include<stdlib.h>
using namespace std;


void printArray(int[], int arraySize);
void fillArray(int[],int arraySize);
void bubbleSort(int[],int arraySize);
int main()
{
    char * locale;
    locale = setlocale(LC_ALL, "");
    int  numElementos, auxSwap;
    const int tamanioMaximo=100; // al usar una variable para el tama�o, podemos cambiar este valor f�cilmente
    int arregloAleatorio[tamanioMaximo];
    for (int i=0; i<tamanioMaximo; i++) // inicializacion del arreglo
        arregloAleatorio[i]=0x7FFFFFFF; // llenar con un n�mero conocido (en este caso el m�ximo valor de int)
    cout << "Ingresa el numero de elementos (m�ximo 100): ";
    cin >> numElementos;
    srand(time(NULL));
    fillArray(arregloAleatorio,numElementos);
    cout<<"El arreglo generado es: \n";
    printArray(arregloAleatorio,numElementos);
    bubbleSort(arregloAleatorio,numElementos);

    cout << "El nuevo arreglo ordenado es: " << endl;
    printArray(arregloAleatorio,numElementos);
    return 0;
}
void fillArray(int arr[],int arraySize)
{
    for(int i=0;i<arraySize;i++) arr[i]=1+rand()%100;
}
void printArray(int arr[], int arraySize )
{
    for (int i=0; i<arraySize; i++)
        cout << "arregloAleatorio[" << i << "] = " << arr[i] << endl;
        cout<<"\n";
}
void bubbleSort(int arr[],int arraySize)
{
   int indiceArreglo=0,auxSwap; // ver comentario abajo sobre esta variable

    for (int i=0; i<(arraySize-1); i++) // el numero de veces a repetir la comparaci�n es numElementos-1
    {
        for (int j=(arraySize-1); j>indiceArreglo; j--)
        // En apego al m�todo, debemos  empezar de atr�s hacia adelante a comparar
        // Si bien no es la �nica manera, es el algoritmo original
        {
            if (arr[j]<arr[j-1])
            {
                auxSwap=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=auxSwap;
            }
        }
        indiceArreglo++;
        // esta es una variable auxiliar que ayuda a que cada vez que se orden� un n�mero, ya no se vuelva a tomar en cuenta
        // de otro modo se puede perder tiempo en checar valores ya ordenados
    }
}
