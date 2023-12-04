#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

#define SIZE 10


int main(){ 
    int a[SIZE];

    srand(time(NULL));
    for(int i = 0; i < SIZE; i++)
        a[i] = rand() % 100; 

    for(int i = 0; i < SIZE; i++)
        printf("%d ", a[i]);
    printf("\n");

    // buscar el mínimo
    int min = INT_MAX;
    for(int i = 0; i < SIZE; i++)
        if(a[i] < min)
            min = a[i];
    printf("min: %d\n", min);
     
    return 0;
}