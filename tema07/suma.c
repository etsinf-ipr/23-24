#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

#define SIZE 10


void printv(int v[], int n){
    for(int i = 0; i < n; i++){ 
        printf("%d ", v[i]);
    } 
    printf("\n");
} 


void suma(int total[], int v[]){
    for(int i = 0; i < SIZE; i++)
        total[i] += v[i];  
} 


void sumav(int v[], int w[], int total[] ){
    for(int i = 0; i < SIZE; i++)
        total[i] = v[i] + w[i] ;  
} 


int main(){
    int a[SIZE], b[SIZE];
    
    srand(time(NULL));
    for(int i = 0; i < SIZE; i++){ 
        a[i] = rand() % 100;
        b[i] = rand() % 100;
    }
    printv(a, SIZE);
    printv(b, SIZE);
    suma(a,b);

    int total[SIZE]; 
    sumav(a, b, total);
    printv(total, SIZE);

    int c[15];
    printv(c, 15);

    return 0;
} 