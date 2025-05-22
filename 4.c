#include <stdio.h>
#include <string.h>

int main(){

    char nome[85], placa[9], modelo[26], cor[15];

    printf("Digite seu nome:");
    fgets(nome, sizeof(nome), stdin);

    nome[strcspn (nome, "\n")] = '\0';

    printf("Digite a placa do seu carro:");
    fgets(placa, sizeof(placa), stdin);

    placa[strcspn (placa, "\n")] = '\0';

    printf("Digite o modelo do seu carro:");
    fgets(modelo, sizeof(modelo), stdin);

    modelo[strcspn (modelo, "\n")] = '\0';

    printf("Digite a cor do seu carro:");
    fgets(cor, sizeof(cor), stdin);

    cor[strcspn (cor, "\n")] = '\0';

    printf("%s tem um carro com a placa\n%s, cujo modelo é um(a)\n%s da cor\n%s\n", nome, placa, modelo, cor);


    return 0;
}