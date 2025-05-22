#include <stdio.h>

int main (){


    char nome[85], endereço[100], telefone[20], sexo[15];
    int idade = 0;

    printf("Qual é o seu nome?\nResposta:");
    fgets(nome, sizeof(nome), stdin);

    printf("Qual é a sua idade?\nResposta:");
    if(scanf("%d", &idade) != 1 || idade <= -1){
        printf("Idade inválida!\n");
        return 0;
    }

    getchar();

    printf("Qual é o seu sexo?\nResposta:");
    fgets(sexo, sizeof(sexo), stdin);

    printf("Qual é o seu endereço?\nResposta:");
    fgets(endereço, sizeof(endereço), stdin);

    printf("Qual é o seu telefone?\nResposta:");
    fgets(telefone, sizeof(telefone), stdin);

    printf("\n\nEsse é seu nome: %s", nome);
    printf("Essa é sua idade: %d\n", idade);
    printf("Esse é seu sexo: %s", sexo);
    printf("Esse é seu endereço: %s", endereço);
    printf("E esse é seu telefone: %s\n", telefone);

    return 0;
}