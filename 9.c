#include <stdio.h>
#include <string.h>

int main(){

    char nome[87];
    float nota[3], soma=0, med=0;
    int i=0;

    printf("Insira seu nome:");
    fgets(nome, sizeof(nome), stdin);

    nome[strcspn(nome, "\n")] = '\0';

    for(i=0; i <3; i++){
        printf("Insira a %dº nota:", i+1);
        if(scanf("%f", &nota[i]) != 1 || nota[i]<0 || nota [i] > 10){
            printf("Nota inválida!\n");
            return 1;
        }
        soma += nota[i];
    }

    med = soma/3;

    printf("%s, sua média foi de %.1f,\nlogo, você foi ", nome, med);

    if(med >= 6)
        printf("Aprovado!\n");
    else
        printf("Reprovado :(\n");

    return 0;
}