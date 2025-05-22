#include <stdio.h>
#include <string.h>

int main (){

    char nome[85];
    double titulo=0,candidato=0;

    printf("Digite seu nome:");
    fgets(nome, sizeof(nome), stdin);

    nome[strcspn(nome, "\n")] = '\0';

    printf("Insira seu título de eleitor:");
    if(scanf("%d", &titulo) != 1 || titulo <= 0 || titulo >= 1000000000000){
        printf("titulo inexistente.\n");
        return 1;
    }

    printf("Insira o número do candidato:");
    if(scanf("%d", &titulo) != 1 || titulo >= 100000 || titulo <= -1){
        printf("titulo inexistente.\n");
        return 1;
    }

    printf("%s, do título\n%d, votou no candidato\ncom o número %d\n", nome, titulo, candidato);
    return 0;
}