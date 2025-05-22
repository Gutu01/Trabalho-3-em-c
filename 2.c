#include <stdio.h>
#include <string.h>

int main(){

    char nome[85];
    float pri=0, seg=0, ter=0, qua=0, med=0;

    printf("Digite seu nome:");
    fgets(nome, sizeof(nome), stdin);
    
    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite a nota do seu 1ª semestre:");
    if(scanf("%f", &pri) != 1 || pri <= -1 || pri >= 11){
        printf("Valor inserido inválido!\n");
        return 0;
    }

    printf("Digite a nota do seu 2ª semestre:");
    if(scanf("%f", &seg) != 1 || seg <= -1 || seg >= 11){
        printf("Valor inserido inválido!\n");
        return 0;
    }

    printf("Digite a nota do seu 3ª semestre:");
    if(scanf("%f", &ter) != 1 || ter <= -1 || ter >= 11){
        printf("Valor inserido inválido!\n");
        return 0;
    }

    printf("Digite a nota do seu 4ª semestre:");
    if(scanf("%f", &qua) != 1 || qua <= -1 || qua >= 11){
        printf("Valor inserido inválido!\n");
        return 0;
    }

    med = (pri+seg+ter+qua)/4;

    printf("%s, você tirou:\n%.2f no primeiro bimestre\n%.2f no segudo bimestre\n%.2f no terceiro bimestre e\n%.2f no quarto semestre\n\nSua média final foi de %.2f\n", nome, pri, seg, ter, qua, med);

    return 0;
}