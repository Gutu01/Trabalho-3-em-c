#include <stdio.h>

int main(){

    float hora=0,mes=0,salario=0,INSS=0,sindicato=0,FGTS=0,descontos=0, liquido=0,IR=0;

    printf("Digite quanto você ganha por hora:");

    if(scanf("%f", &hora) != 1 || hora <= 0){
        printf("Valor inválido!\n");
        return 1;
    }

    printf("Digite quantas horas você trabalha por mês:");

    if(scanf("%f", &mes) != 1 || mes <= 0){
        printf("Valor inválido!\n");
        return 1;
    }

    salario = mes*hora;
    
    if(salario <= 900){

        INSS = salario*10/100;
        sindicato = salario*3/100;
        FGTS = salario*11/100;
        descontos = sindicato+INSS;
        liquido = salario-sindicato-INSS; 

        printf("Salário bruto: R$%.2f\n", salario);
        printf("(-)IR 0%%: R$0\n");
        printf("(-)INSS 10%%: R$%.2f\n", INSS);
        printf("(-)Sidicato 3%%: R$%.2f\n", sindicato);
        printf("FGTS 11%%: R$%.2f\n", FGTS);
        printf("Total de descontos: R$%.2f\n", descontos);
        printf("Salário líquido: R$%.2f\n", liquido);

    }else if(salario > 900 && salario <= 1500){

        IR= salario*5/100;
        INSS = salario*10/100;
        sindicato = salario*3/100;
        FGTS = salario*11/100;
        descontos = sindicato+INSS+IR;
        liquido = salario-sindicato-INSS-IR; 

        printf("Salário bruto: R$%.2f\n", salario);
        printf("(-)IR 5%%: R$%.2f\n",IR);
        printf("(-)INSS 10%%: R$%.2f\n", INSS);
        printf("(-)Sidicato 3%%: R$%.2f\n", sindicato);
        printf("FGTS 11%%: R$%.2f\n", FGTS);
        printf("Total de descontos: R$%.2f\n", descontos);
        printf("Salário líquido: R$%.2f\n", liquido);

    }else if(salario > 1500 && salario <= 2500){

        IR= salario*10/100;
        INSS = salario*10/100;
        sindicato = salario*3/100;
        FGTS = salario*11/100;
        descontos = sindicato+INSS+IR;
        liquido = salario-sindicato-INSS-IR; 

        printf("Salário bruto: R$%.2f\n", salario);
        printf("(-)IR 10%%: R$%.2f\n",IR);
        printf("(-)INSS 10%%: R$%.2f\n", INSS);
        printf("(-)Sidicato 3%%: R$%.2f\n", sindicato);
        printf("FGTS 11%%: R$%.2f\n", FGTS);
        printf("Total de descontos: R$%.2f\n", descontos);
        printf("Salário líquido: R$%.2f\n", liquido);

    }else{

        IR= salario*20/100;
        INSS = salario*10/100;
        sindicato = salario*3/100;
        FGTS = salario*11/100;
        descontos = sindicato+INSS+IR;
        liquido = salario-sindicato-INSS-IR; 

        printf("Salário bruto: R$%.2f\n", salario);
        printf("(-)IR 20%%: R$%.2f\n",IR);
        printf("(-)INSS 10%%: R$%.2f\n", INSS);
        printf("(-)Sidicato 3%%: R$%.2f\n", sindicato);
        printf("FGTS 11%%: R$%.2f\n", FGTS);
        printf("Total de descontos: R$%.2f\n", descontos);
        printf("Salário líquido: R$%.2f\n", liquido);
    }

    return 0;
}