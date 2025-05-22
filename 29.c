#include <stdio.h>

int main(){

    int sexo=0;
    float altura=0, peso=0;

    printf("1 para homem e 2 para mulher:");

    if(scanf("%d", &sexo) != 1 || sexo <1 || sexo >2){
        printf("Sexo inválido!");
        return 1;
    }

    printf("Insira sua altura (ex.: 1.75):");

    if(scanf("%f", &altura) != 1 || altura <=0 ){
        printf("Altura inválido!");
        return 1;
    }

    if(sexo == 1){
        peso = (72.7*altura) - 58;
        printf("Seu peso ideal é: kg%.2f\n", peso);
    }else{
        peso = (62.1*altura) - 44.7;
        printf("Seu peso ideal é: kg %.2f\n", peso);
    }

    return 0;
}