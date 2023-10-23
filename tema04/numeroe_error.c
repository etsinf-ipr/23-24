#include <stdio.h>
#include <math.h>


int main(int argc, char *argv[]){

    int nterm, fact = 1;
    float termino, e = 1;
    float e_ant = 0;
    float error;

    printf("Error: ");
    scanf("%f", &error);


    for(int i = 1; fabs(e - e_ant) >= error; i++){
        e_ant = e; //guardar el valor anterior
        fact *= i; 
        termino = 1.0 / (float)fact;
        e += termino;
    } 
    printf("e = %f\n", e);
    return 0;
} 