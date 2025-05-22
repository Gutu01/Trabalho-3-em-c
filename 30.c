#include <stdio.h>

int main(){

    float kg=0,taxa=0;

    printf("Quantos quilos de peixe você pegou?\nResposta:");

    if(scanf("%f", &kg) != 1 || kg < 0){
        printf("Quilo inválido!\n");
        return 1;
    }

    if(kg > 50){
        taxa = (kg-50)*4;
        printf("Você pagará R$%.2f de taxa por excedente!\n", taxa);
    }else
        printf("Você está liberado!\n");
    


    return 0;
}