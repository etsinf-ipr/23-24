#include <stdio.h>

int main(){ 
    int dado[6] = {0,0,0,0,0,0};

    for(int i = 0; i < 6; i++)
        dado[i] = i; 

    for(int i = 0; i < 6; i++)
        printf("%d\n", dado[i]);


    return 0;
}
