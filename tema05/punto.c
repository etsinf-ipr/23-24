#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


void aleatorio(double *x, double *y){
    (*x) = rand() / (double)RAND_MAX;
    (*y) = rand() / (double)RAND_MAX;
}  


void intercambia (double *x, double *y){
    double tmp = *x;
    *x = *y;
    *y = tmp;
}


double distancia(double x1, double y1, double x2, double y2){
    double dx = x2 - x1;
    double dy = y2 - y1;
    return sqrt(dx*dx + dy*dy);
    //return sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
}


void arriba(double *x, double *y){
    *y += 0.1;
}


void abajo(double *x, double *y){
    *y -= 0.1;
}


void derecha(double *x, double *y){
    *x += 0.1;
}


void izquierda(double *x, double *y){
    *x -= 0.1;
}


void print(double x, double y){
    printf("(%.2lf, %.2lf)\n", x, y);
}


int main(){
    double x1, y1, x2, y2, d;

    // pregunta al usuario el primer punto
    printf("x: "); scanf("%lf", &x1);
    printf("y: "); scanf("%lf", &y1);
    // genera el segundo punto al azar
    aleatorio(&x2, &y2);
    print(x2, y2);

    // calcula la distancia entre los dos puntos
    d = distancia(x1, y1, x2, y2);
    printf("Distancia: %.2lf\n", d);

    // mueve el punto 1 hacia arriba
    print(x1, y1);
    arriba(&x1, &y1);
    print(x1, y1);
    return 0;
} 
