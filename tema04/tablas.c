#include <stdio.h>

int main(){
    int res;
    for(int num = 1; num <= 10; num++){
        for(int i = 1; i <= 10; i++){
            res = num * i;
            printf("%2d x %2d = %d\n", num, i, res);
        } 
    } 

    return 0;

} 