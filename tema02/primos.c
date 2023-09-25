#include <stdio.h>

int main() {
    int n, m, resto;
    //pide un número
    printf("Dame un número: ");
    scanf("%d", &n);

    //repetir desde m = 2 hasta n-1
    m = 2;
    while(m < n){
        resto = n % m;
        //si n es divisible entre m no es primo
        if (resto == 0){ 
            printf("No es primo\n ");
            break;    
        }
        m++;
        // m = m + 1;
        // m += 1;
    } 
    //for (int i = 0; i < 10; i++)
    
    //si no es divisible entre ninguno
    //es primo
    if(m == n)
        printf("Es primo\n ");
    return 0;
} 