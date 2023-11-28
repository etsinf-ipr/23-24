#include <stdio.h>

struct usuario{
    char nick[30];
    char password[15];
    char email[50];
};

typedef struct usuario user_t;



user nuevo_usuario(){
    user_t u;
    printf("nombre: ");
    scanf("%s", u.nick);
    printf("password: ");
    scanf("%s", u.password);
    printf("email: ");
    scanf("%s", u.email);
    return u;
} 


void rellena_datos(user *u){
    printf("nombre: ");
    scanf("%s", u->nick);
    printf("password: ");
    scanf("%s", u->password);
    printf("email: ");
    scanf("%s", u->email);
} 


int main(){
    user us;
    char hora[6] = "12:30";

    printf("nombre: ");
    scanf("%s", us.nick);
    printf("password: ");
    scanf("%s", us.password);
    printf("email: ");
    scanf("%s", us.email);
    
    user us2 ={"juan", "1234", "pep@aol.com"};
    
    user us3;
    us3 = nuevo_usuario();

    user us4;
    rellena_datos(&us4);
    return 0;
} 