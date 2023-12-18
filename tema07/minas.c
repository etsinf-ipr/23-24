#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define GAMESIZE 10
#define SIZE GAMESIZE + 2
#define MINA -1

int alrededor(int t[][SIZE], int i, int j){
    int minas = 0;
    for(int x = i-1; x <= i+1; x++)
        for(int y = j-1; y <= j+1; y++)
            if(t[x][y] == MINA)
                minas++;
    return minas;
} 


int main(){

    int tablero[SIZE][SIZE] = {0};  

    srand(time(NULL));

    // rellena el tablero con minas
    int i, j;
    for(int k = 0; k < 10; k++){
        i = rand() % GAMESIZE + 1;
        j = rand() % GAMESIZE + 1;
        tablero[i][j] = MINA;  
    } 

    // muestra el tablero
    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++)
           printf("%2d ", tablero[i][j]);
        printf("\n"); 
    } 

    // rellena las pistas
    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            if(tablero[i][j] != MINA)
                tablero[i][j] = alrededor(tablero, i, j);
        } 
    } 

    // muestra el tablero
    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++)
           printf("%2d ", tablero[i][j]);
        printf("\n"); 
    } 
    return 0;
} 



