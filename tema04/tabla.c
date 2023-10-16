#include <stdio.h>

int main(){
    int num, res;

    do{
        printf("Número (1-10): ");
        scanf("%d", &num);
    } while(num < 1 || num > 10);

    for(int i = 1; i <= 10; i++){
        res = num * i;
        printf("%d x %2d = %d\n", num, i, res);
    }

    return 0;
} 