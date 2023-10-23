#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int n, fact = 1;

    n = atoi(argv[1]);
    for(int i = 1; i <= n; i++)
        fact *= i;

    printf("%d! =  %d\n", n, fact);
    return 0;
} 