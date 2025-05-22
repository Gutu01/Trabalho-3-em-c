#include <stdio.h>

int main(){

    int frango=0;
    float valor=0;

    printf("Digite quantos frangos você quer:");
    
    if(scanf("%d", &frango) != 1 || frango <= 0){
        printf("Valor inválido, seu frangote!\n");
        return 1;
    }

    valor = frango*4+frango*2*3.5;
//Essa conta poderia ser só o frango * 11, pois o valor é fixo, porém o código desse
//jeito possibilita alteração de valores mais "facilmente";

    printf("Gasto para marcar todos os frangos: R$%.2f\n", valor);

    return 0;
}