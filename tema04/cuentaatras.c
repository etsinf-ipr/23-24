#include <stdio.h>

int main(){
    
    for(int i = 9; i >= 0; i--){
        printf("%d ", i);
    }
    printf("\n");

    int i = 9;
    while(i >= 0){
        printf("%d ", i);
        i--;
        //printf("%d ", i--);
    }
    printf("\n");

    return 0;
} 