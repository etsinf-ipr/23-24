#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

struct punto{
    double x;
    double y;
};


void rellena(struct punto *p){
    (*p).x = rand() / (double)RAND_MAX;
    p->y = rand() / (double)RAND_MAX;
} 

struct punto crea(){
    struct punto p;
    p.x = rand() / (double)RAND_MAX;
    p.y = rand() / (double)RAND_MAX;
    return p;
} 


double distancia(struct punto p1, struct punto p2){
    double d;
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    d = sqrt(dx*dx + dy*dy);
    return d;
}


void arriba(struct punto *p){
    p->y += 0.1;
}

void abajo(struct punto *p){
    p->y -= 0.1;
}

void derecha(struct punto *p){
    p->x += 0.1;
}

void izquierda(struct punto *p){
    p->x -= 0.1;
}

void print(struct punto p){
    printf("(%.2lf, %.2lf)\n", p.x, p.y);
}


int main(){
    struct punto p1, p2, p3;
    p1.x = 0;
    p1.y = 0;

    printf("x: "); scanf("%lf", &p1.x);
    printf("y: "); scanf("%lf", &p1.y);
    rellena(&p2);
    p3 = crea();
    print(p2);

    double d = distancia(p1, p2);
    printf("Distancia: %.2lf\n", d);
    print(p1);
    arriba(&p1);
    print(p1);
    return 0;
} 
