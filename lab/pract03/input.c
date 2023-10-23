#include <stdio.h>

// macro para comprobar si una hora es correcta
// devuelve 1 si la hora es correcta, 0 en caso contrario
#define es_correcta(h, m, s) (h >= 0 && h <= 23 && m >= 0 && m <= 59 && s >= 0 && s <= 59)

int main() {
    int hora, min, seg;
    printf("introduce una hora en formato hh:mm:ss > ");
    scanf("%d:%d:%d", &hora, &min, &seg);

    printf("hora: %d, min: %d, seg: %d\n", hora, min, seg);
    
    if(es_correcta(hora, min, seg))
        printf("hora: %d, min: %d, seg: %d\n", hora, min, seg);

    return 0;
}