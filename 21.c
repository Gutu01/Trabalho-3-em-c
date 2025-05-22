#include <stdio.h>

int main(){

    float salario=0,comissao=0, salariofinal=0;

    printf("Digite seu salário fixo:");

    if(scanf("%f", &salario) != 1 || salario < 0){
        printf("Salário inválido!\n");
        return 1;
    }

    printf("Digite o valor das suas vendas:");

    if(scanf("%f", &comissao) != 1 || salario < 0){
        printf("comissão inválido!\n");
        return 1;
    }

    comissao = comissao*4/100;
    salariofinal = comissao+salario;

    printf("Sua comissão foi de comissao: R$%.2f\n", comissao);
    printf("Seu salário final foi de: R$%.2f\n", salariofinal);
    return 0;
}