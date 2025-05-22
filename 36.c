#include <stdio.h>

int main(){

    int codigos=0,codigor=0;
    float valor=0;

    printf("100 - Cachorro quente R$11.20\n101 - Ovo simples R$8.30\n102 - Bauru com ovo R$11.50\n103 - Hambúrguer R$ 16.20\n0 - Nenhum\n");
    printf("Digite o código de um sanduíche:");

    if((scanf("%d", &codigos) != 1 || codigos < 100 || codigos > 104) && codigos != 0){
        printf("Código inválido!\n");
        return 1;
    }

    printf("\n201 - Refrigerante R$6.00\n202 - Suco R$7.50\n203 - Água mineral R$4.70\n0 - Nenhum\n");
    printf("Digite o código de um refrigerante:");

    if((scanf("%d", &codigor) != 1 || codigor < 201 || codigor > 203) && codigor != 0){
        printf("Código inválido!\n");
        return 1;
    }

    if(codigos == 100)
        valor += 11.20;
    else if(codigos == 101)
        valor += 8.30;
    else if(codigos == 102)
        valor += 11.50;
    else if(codigos == 103)
        valor += 16.20;

    if(codigor == 201)
        valor += 6;
    else if(codigor == 202)
        valor += 7.50;
    else if(codigor == 203)
        valor += 4.70;

    printf("O valor total é de R$%.2f\n", valor);

    return 0;
}