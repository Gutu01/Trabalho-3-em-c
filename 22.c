#include <stdio.h>

int main(){

    float produto=0,valor=0;

    printf("Insira o valor do produto:");

    if(scanf("%f", &produto) != 1 || produto <= 0){
        printf("Produto inesistente!\n");
        return 1;
    }

    valor = produto-produto*10/100;

    printf("Seu produto com desconto foi de: R$%.2f\n", valor);

    return 0;
}