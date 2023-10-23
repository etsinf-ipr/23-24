#include <stdio.h>

int main(int argc, char *argv[]){
    int nterm, fact = 1;
    float termino, e = 1;

    printf("Términos: ");
    scanf("%d", &nterm);

    for(int i = 1; i < nterm; i++){
        fact *= i; 
        // para que haga la división con decimales
        termino = 1.0 / fact; 
        //termino = 1 / (float)fact; 
        e += termino;
    } 
    printf("e = %f\n", e);
    return 0;
} 