#include <stdio.h>

int main(){

    float lado[3];
    int i=0;

    for(i=0; i<3;i++){
        printf("%dº Lado:", i + 1);
        if(scanf("%f", &lado[i]) != 1 || lado <= 0){
            printf("Valor inválido!\n");
            return 1;
        }
    }

    if(lado[0] == lado[1] && lado[1] == lado[2])
        printf("Seu triângulo é equilátero!\n");
    else if(lado[0] == lado[1] ||  lado[1] == lado[2] || lado[1] == lado[0])
        printf("Seu triângulo é isósceles!\n");
    else 
        printf("Seu triângulo é escaleno!\n");

    return 0;
}