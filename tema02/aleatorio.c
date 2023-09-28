#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    // declara una variable entera
    int n;
    srand(time(0));
    for(int i = 0; i < 10; i++){ 
        // genera un entero al azar
        n = rand() % 6 + 1;
        // imprime el numero aleatorio que ha generado
        printf("%d ", n);
    } 
    printf("\n ");
    return 0;
} 
