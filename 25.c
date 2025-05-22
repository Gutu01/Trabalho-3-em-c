#include <stdio.h>

int main(){

    const char *tamanhos[3] = {"pequenas", "médias", "grandes"};
    int i=0, quantidades[0];
    float total=0;
   
    for(i=0;i<3;i++){
        printf("Quantidade de camisas %s:", tamanhos[i]);

        if(scanf("%d", &quantidades[i]) != 1 || quantidades[i] < 0){
            printf("Valor inválido!\n");
            return 1;
        }

    }

    total = quantidades[0]*10+quantidades[1]*15+quantidades[2]*20;


    printf("Valor total da conta: R$%.2f\n", total);

    return 0;
}