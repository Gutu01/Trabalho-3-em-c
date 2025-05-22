#include <stdio.h>

int main(){

    int i=0,matricula[50],sexo[50], status[50], quantidade=0, quantidade2=0, contasexo=0;
    float altura[50],valor=0;

    for(i=0; i<50;i++){

        printf("Matricula(5 dígitos):");

        if(scanf("%d", &matricula[i]) != 1 || matricula[i] <= 0){
            printf("Matricula inválida!\n");
            return 1;
        }
        
        printf("1 para masculino e 2 para feminino:");
        
        if(scanf("%d", &sexo[i]) != 1 || sexo[i] <= 0 || sexo[i] >= 3){
            printf("Sexo inválida!\n");
            return 1;
        }

        printf("Digite a altura:");
        
        if(scanf("%f", &altura[i]) != 1 || altura[i] <= 0){
            printf("Altura inválida!\n");
            return 1;
        }

        printf("Digite o status físico, 1-bom,\n2-regular e 3-ruim:");
        
        if(scanf("%d", &status[i]) != 1 || status[i] <= 0  || status[i] >= 4){
            printf("Status inválido!\n");
            return 1;
        }

            if(sexo[i] == 2 && altura[i] > 1.7)
                quantidade += 1;

            if(sexo[i] == 1 && status[i] == 1){
                contasexo += 1;
                quantidade2 += 1;
        }   else if(sexo[i] == 1)
                contasexo += 1;
    }

    valor = quantidade2*100/contasexo;

    printf("Quantidade de mulheres com mais de 1.70 de altura: %d\n", quantidade);
    printf("Porcentagem de homens com status físico\nbom em relação aos próprios homens: %%%.2f\n", valor);

    return 0;

}