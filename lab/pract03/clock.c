#include <stdio.h>
#include <stdlib.h> //para usar system()
#include <unistd.h> //para usar sleep()

int main( ){

    for(int i = 0; i < 15; i++ ){
        system("clear");    //limpia la pantalla
        printf("00:%02d\n", i);
        sleep(1);           //espera 1 segundo
    } 
        
    return 0;
} 