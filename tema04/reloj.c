#include <stdio.h>


int main(){
    for( int h = 0; h < 24; h++){ 
        for(int m = 0; m < 60; m++){
            printf("%2d:%02d\n", h, m);

        } 
    } 
    return 0;
} 