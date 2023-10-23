#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// #define permite definir constantes 
#define NTERM 'i'
#define ERROR 'e'

int main(int argc, char *argv[]){
    int nterm, fact = 1;
    float termino, e = 1;
    float error, e_ant = 0;

    if (argc != 3){
        printf("Uso: numeroe -i <términos> | -e <error>\n");
        return 1;
    } 

    char modo = argv[1][1];    
    switch(modo){
        case NTERM:
            nterm = atoi(argv[2]);
            for(int i = 1; i < nterm; i++){
                fact *= i; 
                termino = 1.0 / fact; 
                e += termino;
            } 
            break;
        case ERROR:
            error = atof(argv[2]);
            int i = 1;
            while(fabs(e - e_ant) >= error){
                e_ant = e; 
                fact *= i; 
                termino = 1 / (float)fact;
                e += termino;
                i++;
            } 
            break;
        default: 
            printf("-%c no es una opción válida\n", modo);
            return 2;
    } 

    printf("e = %f\n", e);
    return 0;
} 