#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

struct punto{
    double x;
    double y;
};


struct punto aleatorio();


double distancia(struct punto p1, struct punto p2){
    double dx = 0; // escribe las fórmula para dx y dy
    double dy = 0;
    return sqrt(dx*dx + dy*dy);
}


void arriba(struct punto *p){
    // escribe el código
}

void abajo(struct punto *p){
    // escribe el código
}

void derecha(struct punto *p){
    // escribe el código
}

void izquierda(struct punto *p){
    // escribe el código
}

void print(struct punto p){
    printf("(%.2lf, %.2lf)\n", p.x, p.y);
}


int main(){
    struct punto p1, p2;
    p1.x = 0;
    p1.y = 0;

    printf("x: "); scanf("%lf", &(p1.x));
    printf("y: "); scanf("%lf", &(p1.y));
    p2 = aleatorio();
    print(p2);

    double d = distancia(p1, p2);
    printf("Distancia: %.2lf\n", d);
    print(p1);
    arriba(&p1);
    print(p1);
    return 0;
} 
