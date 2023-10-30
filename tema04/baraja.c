#include <stdio.h>

int main(){

    for(int palo = 0; palo <= 3; palo++){
        for(int num = 1; num <= 10; num++){
            printf("%d de ", num);
            switch(palo){
                case 0: printf("oros\n"); break;
                case 1: printf("copas\n"); break;
                case 2: printf("espadas\n"); break;
                case 3: printf("bastos\n"); break;
            } 
        } 
    } 

    return 0;
} 