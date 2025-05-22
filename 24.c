#include <stdio.h>

int main(){

    int sanduiche=0, queijo=0,presunto=0,amburguer=0, total=0;

    printf("Insira a quantidade de sanduíches a comprar:");

    if(scanf("%d", &sanduiche) != 1 || sanduiche <= 0){
        printf("Quantidade de sanduba inválido!");
        return 1;
    }

    queijo = sanduiche*50*2;
    presunto = sanduiche*50;
    amburguer = sanduiche*100;

    printf("Quantidade de queijo a comprar: Kg%d\n", queijo);
    printf("Quantidade de presunto a comprar: Kg%d\n", presunto);
    printf("Quantidade de amburguer a comprar: Kg%d\n", amburguer);

    return 0;
}