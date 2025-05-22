#include <stdio.h>

int main (){

    float base=0,altura=0,resultado=0;

    printf("Vamos ver a área de um triângulo!\nBase do triângulo(em metros):");
    
    if(scanf("%f", &base) != 1 || base <=0){
        printf("Valor inválido!\n");
        return 1;
    }

    printf("Altura do triângulo(em metros):");
    
    if(scanf("%f", &altura) != 1 || altura <=0){
        printf("Valor inválido!\n");
        return 1;
    }

    resultado = (base*altura)/2;

    printf("A área do triângulo é de %.2f metros quadrados\n", resultado);

    return 0;
}