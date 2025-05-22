#include <stdio.h>

int main(){

    float restante=0,C1=0,C2=0,divida=0;

    C1 = 200+200*2.0/100.0;
    C2 = 120+120*2.0/100.0;
    divida = C1+C2;
    restante = 1200-divida;

    printf("Restará R$%.2f do salário de João\n", restante);

    return 0;
}