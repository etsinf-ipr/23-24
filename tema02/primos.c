#include <stdio.h>

int main() {
    int n, i, resto;
    //pide un número
    printf("Dame un número: ");
    scanf("%d", &n);

    //repetir desde m = 2 hasta n-1
    //m = 2;
    //while(m < n){
    if ( n % 2 == 0)
        printf("No es primo\n ");

    for ( i = 3; i <= n / 2; i += 2){ 
        resto = n % i;
        //si n es divisible entre m no es primo
        if (resto == 0){ 
            printf("No es primo\n ");
            break;    
        }
        //m++;
        // m = m + 1;
        // m += 1;
    } 
    
    //si no es divisible entre ninguno
    //es primo
    if(i == n)
        printf("Es primo\n ");
    return 0;
} 