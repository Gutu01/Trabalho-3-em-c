#include <stdio.h>

int main(){

    float numero=0;

    printf("Insira um número:");

    if(scanf("%f", &numero) != 1){
        printf("Número Inválido!");
        return 1;
    }

    if(numero>10)
        printf("Seu número é maio que 10!\n");
    else if(numero<10)
        printf("Seu número é menor que 10!\n");
    else 
        printf("Seu número é igual a 10 :O\n");

    return 0;
}