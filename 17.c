#include <stdio.h>

int main(){

    float salario=0,salariodepois=0,aumento=0;

    printf("Insira o salário:");
    
    if(scanf("%f", &salario) != 1 || salario <= 0){
        printf("Valor inválido!\n");
        return 1;
    }


    if(salario < 280){

        salariodepois = salario*120/100;
        aumento = salariodepois - salario;

        printf("Salário antes do reajuste: R$%.2f\n", salario);
        printf("Percentual de aumento aplicado: 20%%\n");
        printf("Valor do aumento: R$%.2f\n", aumento);
        printf("Novo salário, após o aumento: R$%.2f\n", salariodepois);
    }
    else if(salario >= 280 && salario <= 700){

        salariodepois = salario*115/100;
        aumento = salariodepois - salario;

        printf("Salário antes do reajuste: R$%.2f\n", salario);
        printf("Percentual de aumento aplicado: 15%%\n");
        printf("Valor do aumento: R$%.2f\n", aumento);
        printf("Novo salário, após o aumento: R$%.2f\n", salariodepois);

    }
    else if(salario > 700 && salario < 1500){

        salariodepois = salario*110/100;
        aumento = salariodepois - salario;

        printf("Salário antes do reajuste: R$%.2f\n", salario);
        printf("Percentual de aumento aplicado: 10%%\n");
        printf("Valor do aumento: R$%.2f\n", aumento);
        printf("Novo salário, após o aumento: R$%.2f\n", salariodepois);
    }
    else{

        salariodepois = salario*105/100;
        aumento = salariodepois - salario;

        printf("Salário antes do reajuste: R$%.2f\n", salario);
        printf("Percentual de aumento aplicado: 5%%\n");
        printf("Valor do aumento: R$%.2f\n", aumento);
        printf("Novo salário, após o aumento: R$%.2f\n", salariodepois);
    }

    return 0;
}