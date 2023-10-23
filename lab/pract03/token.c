#include <stdio.h>
#include <stdlib.h>  // para atoi()
#include <string.h>  // para strtok()


int main() {
    char reloj[9]; // 8 caracteres + 1 para el \0 
    char *token;  //para extraer las partes de la hora

    printf("introduce una hora en formato hh:mm:ss: ");
    scanf("%s", reloj);
    
    // extrae el primer elemento de la cadena hasta el primer :
    // deja el elemento en token y el resto de la cadena en reloj   
    token = strtok(reloj, ":"); 
    int hora = atoi(token); // convierte la hora a entero
    // extrae el siguiente elemento 
    // (NULL indica que sigue con la cadena anterior)
    token = strtok(NULL, ":"); 
    int min = atoi(token);   // convierte los minutos a entero
    // extrae el último elemento
    token = strtok(NULL, ":"); 
    int seg = atoi(token);  // convierte los segundos a entero

    printf("hora: %d, min: %d, seg: %d\n", hora, min, seg);
    return 0;
}


