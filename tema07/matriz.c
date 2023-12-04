#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Al compilar, se genera el error
    
    declaration of ‘m’ as multidimensional array 
    must have bounds for all dimensions except the first
    
    (la declaración de m como un vector multidimensaional
    debe tener límítes para todas las dimensiones
    excepto la prrimera)
    
    ¿cómo crees que hay que solucionarlo?
*/
void printmat(int m[][]){
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 5; j++) { 
            printf( "%2d ", m[i][j]);
        }
        printf("\n");
    } 
} 



int main(){

    int mat[4][5];

    // rellena una matriz con números al azar
    srand(time(NULL));
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 5; j++)
            mat[i][j] = rand() % 100;  

    // imprime el contenido de la matriz
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 5; j++) { 
            printf( "%2d ", mat[i][j]);
        }
        printf("\n");
    } 

    // si intentamos crear una función, nos da un error
    // ¿cómo hay que definirla para que funcione?
    printmat(mat);
    return 0;
} 