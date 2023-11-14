#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lanzar(int caras, int *d1, int *d2){
    (*d1) = rand() % caras + 1;
    (*d2) = rand() % caras + 1;   
}


int main(){
    int dado1, dado2, lanzamientos = 10;

    srand(time(NULL));
    for(int i = 0; i < lanzamientos; i++) {
        lanzar(6, &dado1, &dado2);
        printf("d1: %d, d2: %d -> total %d\n", d1, d2, d1 + d2);
    }
    return 0;
}

