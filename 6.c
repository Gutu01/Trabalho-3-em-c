#include <stdio.h>

int main (){

    float base=0,altura=0,resultado=0;

    printf("Vamos ver a área de um retângulo!\nBase do retângulo(em metros):");

    if(scanf("%f", &base) != 1 || base <=0){
        printf("Valor inválido!\n");
        return 1;
    }

    printf("Altura do retângulo(em metros):");

    if(scanf("%f", &altura) != 1 || altura <=0){
        printf("Valor inválido!\n");
        return 1;
    }

    resultado = base*altura;

    printf("A área do retângulo é de %.2f metros quadrados.\n", resultado);

    return 0;
}