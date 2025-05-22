#include <stdio.h>

int main(){

    int pao=0,broas=0;
    float total=0, poupar=0;

    printf("Pães vendidos:");

    if(scanf("%d", &pao) != 1 || pao < 0){
        printf("Valor inválido!\n");
        return 1;
    }

    printf("Broas vendidas:");

    if(scanf("%d", &broas) != 1 || broas < 0){
        printf("Valor inválido!\n");
        return 1;
    }

    total = pao*1+broas*3.50;
    //Como o pão custa 1 real, eu nem preciso colocar que pão*1 porque qualquer coisa vezes 1
    //é ela mesma. Porém, dessa forma fica mais fácil de alterar o valor futuramente

    poupar = total*10/100;

    printf("Total do valor das vendas: R$%.2f\n", total);
    printf("Valor para poupar: R$%.2f\n", poupar);

    return 1;
}