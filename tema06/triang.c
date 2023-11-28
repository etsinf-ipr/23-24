#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct punto{
    double x;
    double y;
};
typedef struct punto punto_t;

struct triangulo{
    punto_t p1, p2, p3;
};
typedef struct triangulo tri_t;

void rellena(punto_t *p){
    p->x = rand() / (double)RAND_MAX;
    p->y = rand() / (double)RAND_MAX;
} 


tri_t nuevo(){
    tri_t t;
    t.p1.x = rand()/(double)RAND_MAX;
    t.p1.y = rand()/(double)RAND_MAX;
    rellena(&t.p2);
    return t;
} 


void imprime(tri_t t){
    printf("p1: (%lf, %lf)\n", t.p1.x, t.p1.y);
    printf("p2: (%lf, %lf)\n", t.p2.x, t.p2.y);
    printf("p3: (%lf, %lf)\n", t.p3.x, t.p3.y);
}


int main(){
    tri_t t;

    srand(time(NULL));
    t = nuevo();
    rellena(&t);
    imprime(t);
    return 0;
} 

