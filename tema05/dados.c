#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lanzar(int caras){
    return rand() % caras + 1;
    /* puede hacerse en pasos
    int dado;
    dado = rand() % caras + 1;
    return dado;
    */
}

int main(){
    int d1, d2, lanzamientos = 10;

    srand(time(NULL));
    for(int i = 0; i < lanzamientos; i++) {
        d1 = lanzar(6);
        d2 = lanzar(6);
        printf("d1: %d, d2: %d -> total %d\n", d1, d2, d1 + d2);
    }
    return 0;
}

