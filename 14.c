#include <stdio.h>

int main(){

    int conta=0;
    float saldo=0,creditar=0,debitar=0,saldoatual=0;

    printf("Número da conta(ex.: 12345):");

    if(scanf("%d", &conta) != 1 || conta <= 0){
        printf("Conta inválida!\n");
        return 1;
    }

    printf("Digite o saldo da conta:");

    if(scanf("%f", &saldo) != 1){
        printf("Saldo inválida!\n");
        return 1;
    }

    printf("Digite o valor a debitar:");

    if(scanf("%f", &debitar) != 1){
        printf("Debito inválida!\n");
        return 1;
    }

    printf("Digite o valor a creditar:");

    if(scanf("%f", &debitar) != 1){
        printf("Crédito inválida!\n");
        return 1;
    }
    
    saldoatual = saldo - debitar + creditar;

    if(saldo >= 0)
        printf("Saldo positivo!\n");
    else 
        printf("Saldo negativo :(\n");

    return 0;
}