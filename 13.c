#include <stdio.h>

int main(){

    int numero=0;

    printf("Insira um número:");

    if(scanf("%d", &numero) != 1){
        printf("Valor inválido!\n");
        return 1;
    }


    if(numero % 2 == 0)
        printf("Seu número é par!\n");
    else
        printf("Seu número é impar!\n");

    return 0;
}