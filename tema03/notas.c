#include <stdio.h>

int main(){
    float nota;
    printf("Introduce la nota: ");
    scanf("%f",&nota);

    if (nota < 5){
        printf("Insuficiente\n");
    } 
    else if (nota < 7){
        printf("Suficiente\n");
    } 
    else if (nota < 9){
        printf("Notable\n");
    } 
    else
        printf("Sobresaliente\n");
    } 
         
     
     
    return 0;
} 