#include <stdio.h>


int main(){
    int a, b, suma;
    //int b;
    //int suma;
    /*
    Esto es un programa para la multiplicacion rusa
    */  
    printf("Dame dos números:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    suma = 0;
    while (b > 1){
        if (b % 2 != 0){
            b--;
            suma += a;
        }
        a *= 2;  // a = a * 2;
        b /= 2;
    }
    printf("El resultado es %d", a + suma);
    return 0;
}