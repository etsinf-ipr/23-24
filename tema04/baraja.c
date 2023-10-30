#include <stdio.h>

int main(){

    for(int palo = 0; palo <= 3; palo++){
        for(int num = 1; num <= 10; num++){
            printf("%d de ", num);
            switch(palo){
                case 0: printf("oros\n"); break;
                case 1: printf("copas\n"); break;
            } 
        } 
    } 

    return 0;
} 