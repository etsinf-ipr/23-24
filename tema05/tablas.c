#include <stdio.h>

void imprimir_tabla(int n){ 
    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }
} 

int pedir_numero(){
    int num;
    printf("Introduce un número: ");
    scanf("%d", &num);
    return num;
} 
        
int main(){
    int num;
    num = pedir_numero();
    imprimir_tabla(num);
    return 0;

} 