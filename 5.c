#include <stdio.h>
#include <string.h>

int main (){

    char nome[87], disciplina[23];
    float nota[3], soma=0, med=0;
    int i=0;

    printf("Nome do aluno:");
    fgets(nome, sizeof(nome), stdin);

    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite o nome da disciplina:");
    fgets(disciplina, sizeof(disciplina), stdin);

    disciplina[strcspn(disciplina, "\n")] = '\0';

    for (i = 0; i < 3; i++) {
        printf("Insira a %dª nota: ", i + 1);
        scanf("%f", &nota[i]);
        soma += nota[i];
    }

    med = soma/3;

    printf("%s na disciplina de\n%s tirou\n", nome, disciplina);

    for(i = 0; i < 3; i++){
        printf("%.1f na %dº nota\n", nota[i], i+1);
    }

    printf("Logo, sua média é de %.1f\n", med);

    return 0;
}