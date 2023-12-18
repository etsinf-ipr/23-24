#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_MINAS 10
#define MINA 9



int main(){

    int buscam[10][10];   
    srand(time(NULL));

    int totalminas = 0;
    while (totalminas < NUM_MINAS){
        // genera coordenadas
        int i = rand() % 10;
        int j = rand() % 10;
        // si está libre, marcar como mina
        if(buscam[i][j] != MINA){ 
            printf("(%d, %d)\n", i, j);
            buscam[i][j] = MINA;
            totalminas++;
        } 
    }  

    for(int i = 0; i < 10; i++){    
        for(int j = 0; j < 10; j++)
            printf("%d ", buscam[i][j]);
        printf("\n");
    } 
    return 0;
} 


