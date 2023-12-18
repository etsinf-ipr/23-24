#include <stdio.h>

enum palo_t{
    oros, copas, espadas, bastos
}; 

/*
#define OROS 0
#define COPAS 1
#define ESPADAS 2
#define BASTOS 3
*/

#define PALOS 4
#define CARTAS_PALO 10
#define NUM_CARTAS PALOS * CARTAS_PALO
#define MANO 6




typedef struct carta{
    int valor;
    // int palo;
    enum palo_t palo;
} carta_t;
 
//typedef struct carta carta_t;

void imprimir_carta(carta_t c){
    char nombrep[4] ={'O','C','E','B'};
    char nombrev[CARTAS_PALO] = {'A','2','3','4','5','6','7','J','Q','K'};     
    printf("%c%c ", nombrev[c.valor-1], nombrep[c.palo]);
} 


void crear(carta_t b[]){
    int pos = 0;
    for(int p = oros; p <= bastos; p++)
        for(int v = 1; v <= CARTAS_PALO; v++){
            b[pos].palo = p;
            b[pos].valor = v;
            pos++;
        } 
} 


void imprimir(carta_t b[], int size){
    for(int i = 0; i < size; i++)
        imprimir_carta(b[i]);  
    printf("\n");
} 

void repartir(carta_t b[], carta_t j[], int *sizeb, int sizej){
    int posj = 0;
    for(int i = *sizeb-1; i >= 0 && posj < sizej; i--){
        j[posj] = b[i];
        posj++;
    } 
    *sizeb = *sizeb - posj;
}



int main(){
    int numcartas = NUM_CARTAS;
    carta_t baraja[NUM_CARTAS];
    carta_t jug1[MANO], jug2[MANO];
    
    crear(baraja);
    imprimir(baraja, NUM_CARTAS);
    //repartir cartas empezando por el final de la baraja
    repartir(baraja, jug1, &numcartas, MANO);
    repartir(baraja, jug2, &numcartas, MANO);
    imprimir(jug1, MANO);
    imprimir(jug2, MANO);
    imprimir(baraja, numcartas);

    return 0;
} 










