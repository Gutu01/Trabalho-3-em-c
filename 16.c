#include <stdio.h>

int main(){

    int i=0;
    float numero[3], maior=0, menor=0;

   

    for(i=0; i<3; i++){
        printf("Insira o %dº número:", i + 1);
        if(scanf("%f", &numero[i]) != 1){
            printf("Valor inválido!\n");
            return 1;
        }
    }

    maior = numero[0];
    menor = numero[0];

    for(i=1; i<3; i++){
        if(numero[i] > maior)
            maior = numero[i];
    }

    for(i=1; i<3; i++){
        if(numero[i] < menor)
            menor = numero[i];
    }

    printf("O maior número é: %.2f\n", maior);
    
    printf("O menor número é: %.2f\n", menor);

    return 0;
}