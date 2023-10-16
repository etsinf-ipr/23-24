#include <stdio.h>

int main()
{
    // definimos una cadena de 6 letras
    // 5 para la hora y una "extra"
    // para indicar el final con un '\0' 
    char hora[6];

    printf("Hora: ");
    scanf("%s", hora);
    printf("Son las %s\n", hora); 

    printf("%c\n", hora[0] );
    printf("%c\n", hora[1] );
    printf("%c\n", hora[2] );
    printf("%c\n", hora[3] );
    printf("%c\n", hora[4] );

    return 0;
} 