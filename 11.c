#include <stdio.h>
#include <string.h>

int main (){

    char nome[87];
    int idade=0;

    printf("Insira seu nome:");
    fgets(nome, sizeof(nome), stdin);

    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite sua idade:");
    
    if(scanf("%d", &idade) != 1 || idade < 0){
        printf("Idade inválida!\n");
        return 0;
    }

    if(idade >= 1 && idade <= 2)
        printf("%s está com %d anos e pela tabela é considerado(a) um(a) bebê\n", nome, idade);
    else if(idade >= 3 && idade <= 11)
        printf("%s está com %d anos e pela tabela é considerado(a) uma criança\n", nome, idade);
    else if(idade >= 12 && idade <= 21)
        printf("%s está com %d anos e pela tabela é considerado(a) um(a) jovem\n", nome, idade);
    else if(idade >= 22 && idade <= 64)
        printf("%s está com %d anos e pela tabela é considerado(a) um(a) aduto(a)\n", nome, idade);
    else if(idade >= 65 && idade <= 100)
        printf("%s está com %d anos e pela tabela é considerado(a) um(a) idoso(a)\n", nome, idade);
    else 
        printf("%s está com %d anos e pela tabela é considerado(a) muito velhinho(a)\n", nome, idade);
    return 0;
}