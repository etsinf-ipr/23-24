#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int i, n, suma;

    /*
    printf("argc: %d\n", argc);
    printf("argv[0] : %s\n", argv[0] );
    printf("argv[1] : %s\n", argv[1] );
*/
    n = atoi(argv[1]);
    suma = 0;
    for(i = 1; i <= n; i++)
    ç
        suma += i;
        //suma = suma + i;

    printf("El sumatorio es %d\n", suma);
    return 0;
} 