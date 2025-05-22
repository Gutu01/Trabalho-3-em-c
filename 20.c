#include <stdio.h>

int main(){

    int ano=0;

    printf("Digite um ano:");

    if(scanf("%d", &ano) != 1 || ano <=0){
        printf("Ano inválido!\n");
        return 1;
    }

    if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
        printf("Esse ano é bissexto!\n");
    else
        printf("Esse ano não é bissexto\n");

    return 0;
}