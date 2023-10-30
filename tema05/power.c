int pow(int a, int b){
    
    int potencia = 1;
    
    for(int i = 0; i < b; i++)
        potencia *= a;

    return potencia;
} 