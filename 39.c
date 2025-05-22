#include <stdio.h>

int main(){

    int dia=0,mes=0,restante=0;

    printf("Escolha um dia do mês(1 à 30):");

    if(scanf("%d", &dia) != 1 || dia < 1 || dia >30){
        printf("Dia inválido!\n");
        return 1;
    }

    printf("1 - Janeiro\n2 - Fevereiro\n3 - Março\n4 - Abril\n5 - Maio\n6 - Junho\n7 - Julho\n8 - Agosto\n9 - Setembro\n10 - Outubro\n11 - Novembro\n12 - dezembro\n");
    printf("Digite o código de um mês:");

    if(scanf("%d", &mes) != 1 || mes < 1 || mes >12){
        printf("Mês inválido!\n");
        return 1;
    }

    restante = mes*30+dia;

    printf("Desde o início do ano se passaram %d dias\n", restante);

    return 0;
}