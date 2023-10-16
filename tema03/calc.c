#include <stdio.h>

int main(){

    int a, b, op, res;
    printf("Introduce dos números: ");
    scanf("%d" &a);
    scanf("%d" &b);
    printf("Introduce la operación a realizar: ");
    printf("1. Suma\n2. Resta\n3. Multiplicación\n4. División\n > ");
    scanf("%d", &op);

    switch(op){
        case 1: res = a + b; break;
        case 2: res = a - b; break;
        case 3: res = a * b; break;
        case 4: res = a / b; break;
        default: printf("Operación no válida\n"); return 1;
    } 
    printf("El resultado es %d\n", res);

    return 0;
} 