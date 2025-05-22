#include <stdio.h>

int main(){

    int num12[2],i=0,resultado1=0;
    float num3=0,resultado2=0,resultado3=0;

    for(i=0;i<2;i++){
        printf("Insira um %dº número inteiro:", i+1);
        if(scanf("%d", &num12[i]) != 1){
            printf("Número inválido!\n");
            return 1;
        }
    }

    printf("Insira um 3º número real:");

    if(scanf("%f", &num3) != 1){
        printf("Número inválido!\n");
        return 1;
    }

    resultado1 = (num12[0]*2)*(num12[1]/2);
    resultado2 = num12[0]*3+num3;
    resultado3 = num3*num3*num3;

    printf("Resultado 1: %d\n", resultado1);
    printf("Resultado 2: %.2f\n", resultado2);
    printf("Resultado 3: %.2f\n", resultado3);

    return 0;
}