#include <stdio.h>
#include <math.h>

int main(){
    int nterm;
    double leib = 0;
    double sharp = 0;
    double walls = 1;

    printf("Términos: ");
    scanf("%d",&nterm);

    for(int i = 0; i <= nterm; i++){
        leib += pow(-1,i) / (2*i + 1);
        sharp += pow(-1,i) / ((2*i-1) * pow(3,i));
    } 
    for(int i = 1; i <= nterm; i++)
        walls *= ((double)(2*i) / (2*i-1)) * ((double)(2*i) / (2*i+1));

    leib *= 4;
    sharp *= 6 * sqrt(3) / 3;
    walls *= 2;
    printf("leibniz = %lf\n", leib);
    printf("sharp = %lf\n ", sharp);
    printf("walls = %lf\n ", walls);
    
    return 0;
} 