#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>




struct punto{
    float x, y;
};
typedef struct punto punto_t;

struct circulo{
    punto_t centro;
    float radio;
};
typedef struct circulo circ_t;


float distancia(punto_t, punto_t);


void rellenar(circ_t *c, float x, float y, float r){
    c->radio = r;
    c->centro.x = x;
    c->centro.y = y;
} 


punto_t aleatorio(){
    punto_t p;
    p.x = rand() / (double)RAND_MAX;
    p.y = rand() / (double)RAND_MAX;
    return p;
} 


int pertenece(punto_t p, circ_t c){
    // si la distancia de p al centro es menor que el radio, pertenece = true
    return (distancia(p, c.centro) <= c.radio);

    /*
    if( distancia(p, c.centro) <= c.radio)
        return 1;
    else
        return 0;
        */
} 

float distancia(punto_t p1, punto_t p2){
    float dx = p2.x - p1.x;
    float dy = p2.y - p1.y;
    return sqrt(dx*dx + dy*dy);
} 


int main(int argc, char *argv[]){
    // leer el numero de puntos n
    int total_puntos =  atoi(argv[1]);
    printf("%d\n", total_puntos);

    // construir circulo de radio 1/2 centrado en (1/2, 1/2)
    circ_t circ;
    rellenar(&circ, 0.5, 0.5, 0.5);

    // generar n puntos y contar cuántos caen dentro
    int dentro = 0;
    for(int i = 0; i < total_puntos; i++){
        punto_t pt = aleatorio();
        // si el punto pertenece al circulo, añado 1 a los puntos dentro
        if(pertenece(pt, circ))
            dentro++;
    } 

    // calcular PI
    float pi = 4 * (float)dentro / total_puntos;
    printf("pi = %f\n", pi);

    return 0;
} 


