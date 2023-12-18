#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void genera(int a[], int size){
    for(int i = 0; i < size; i++)
        a[i] = rand() % 100;
}


void extraer(int a[], int pares[], int sizea, int *sizep){
    int j = 0;
    for(int i = 0; i < sizea; i++) 
        if(a[i] % 2 == 0){ 
            pares[j] = a[i];
            j++;
        }  
    *sizep = j;
}


void print(int a[], int size){
    for(int i = 0; i < size; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main (){
    int a[N], pares[N];

    srand(time(NULL));
    //generar un vector de N numeros aleatorios
    genera(a, N);

    //extraer de a los pares
    int numpares;
    extraer(a, pares, N, &numpares);

    //imprimir los dos vectores
    print(a, N);
    print(pares, numpares);
} 
