#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//una forma sencilla de definir y cambiar el núm. de intentos
#define MAX_INTENTOS 10

int main() {
    int pensado, usuario, intentos;
    
    srand(time(0));
    pensado = rand() % 100 + 1;
    printf("Adivina el número que he pensado\n");
    
    for(intentos = 1; intentos <= MAX_INTENTOS; intentos++){
        printf("(%d) ", intentos);
        scanaf("%d", usuario);
        if(pensado > usuario)
            printf("Es mayor\n");
        else if (pensando < usuario)
            printf("Es menor\n");
        else{
            printf("¡Acertaste!\n");
            break;
        }
    }

    if(intentos > MAX_INTENTOS)
        printf("Has fallado. Mi número era %d\n", pensado);
    return 0;
}