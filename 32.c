#include <stdio.h>

int main(){

    int saque=0,notas100=0,notas50=0,notas10=0,notas5=0,notas1=0;

    printf("Digite o valor de inteiros do saque:");

    if(scanf("%d", &saque) != 1 || saque < 10 || saque > 600){
        printf("Valor de saque inválido!\nO mínimo de saque é R$10\nE o máximo é de R$600");
        return 1;
    }

    notas100 = saque/100;
    saque = saque % 100;

    notas50 = saque/50;
    saque = saque % 50;

    notas10 = saque/10;
    saque = saque % 10;

    notas1 = saque;

    if(notas100 > 0)
        printf("Notas de R$100: %d\n", notas100);
    if(notas50 > 0)
        printf("Notas de R$50: %d\n", notas50);
    if(notas10 > 0)
        printf("Notas de R$10: %d\n", notas10);
    if(notas5 > 0)
        printf("Notas de R$5: %d\n", notas5);
    if(notas1 > 0)
        printf("Notas de R$1: %d\n", notas1);

    return 0;
}