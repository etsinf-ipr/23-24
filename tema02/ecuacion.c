#include <stdio.h>
#include <math.h>


int main(){
    int a, b, x1, x2, raiz;

    printf("Introduce los términos\n");
    scanf("%f%f%f", &a, &b, &c);
    raiz = b * b - 4 * a * c;

    if(raiz == 0){
        printf("x = %f\n", -b / (2*a));
    } 
    else if (raiz > 0){
        x1 = (-b + sqrt(raiz)) / (2*a));
        x2 = (-b - sqrt(raiz)) / (2*a));
        printf("x1 = %f\nx2 = %f\n", x1, x2);
    }
    else{
        printf("El sistema tiene soluciones complejas\n");
    }  
} 