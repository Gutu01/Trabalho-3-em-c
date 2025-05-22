#include <stdio.h>

int main(){

    float numero;

    printf("Insira um número:");

    if(scanf("%f", &numero) != 1){
        printf("Valor inválido!\n");
        return 1;
    }

    if(numero >= 0)
        printf("seu número é positivo\n");
    else
        printf("seu número é negativo!\n");

    return 0;
}