#include <stdio.h>

int main(){

    int i=0,operação=0;
    float resultado=0, num[2];
    
    for(i=0;i<2;i++){
        printf("Digite o %dº número:", i+1);
        if(scanf("%f", &num[i]) != 1){
            printf("Número inválido!\n");
            return 1;
        }
    }

    printf("Escolha uma operação para realizar,\nDigite 1 para (-), 2 para (+),\n3 para (*) ou 4 para(/):");
    
    if(scanf("%d", &operação) != 1 || operação < 1 || operação > 4){
        printf("Escola inválida!\n");
    }

    if(operação == 1)
        resultado = num[0] - num[1];
    else if(operação == 2)
        resultado = num[0] + num[1];
    else if(operação == 3)
        resultado = num[0] * num[1];
    else
        resultado = num[0] / num[1];

    printf("Sua conta deu %.2f\n", resultado);

    if((int)resultado == resultado)
        if((int)resultado%2 == 0)
            printf("Seu número é par!\n");
        else
            printf("Seu número é impar!\n");
    else
        printf("Seu número não é par nem impar!\n");

    if(resultado >= 0)
        printf("Seu número é positivo!\n");
    else
        printf("Seu número é negativo!\n");

    if((int)resultado == resultado )
        printf("Seu número é inteiro!\n");
    else
        printf("Seu número é decimal!\n");

    return 0;
}