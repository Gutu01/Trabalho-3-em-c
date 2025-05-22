#include <stdio.h>

int main(){

    float valor=0,total=0;

    printf("Insira o valor de aquisição do produto:");

    if(scanf("%f", &valor) != 1 || valor < 0){
        printf("Valor inválido!\n");
        return 1;
    }

    if(valor < 50){
        total = valor+valor*45/100;
        printf("Valor de venda: R$%.2f\n", total);
    }else{
        total = valor+valor*30/100;
        printf("Valor de venda: R$%.2f\n", total);
    }

    return 0;
}