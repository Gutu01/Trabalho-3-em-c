#include <stdio.h>

int main(){

    int tipo=0,pagamento=0;
    float quantidade=0,valor=0, desconto=0,descontado=0;

    printf("Preço        Até 5Kg          Acima de 5Kg\n");
    printf("--------------------------------------------\n");
    printf("File duplo   R$34.90 por Kg   R$35.80 por Kg\n");
    printf("Alcatra      R$44.90 por Kg   R$46.80 por Kg\n");
    printf("Picanha      R$66.90 por Kg   R$67.80 por Kg\n\n");


    printf("Qual carne você quer comprar?Digite:\n1-File duplo\n2-Alcatra\n3-Picanha\n0-Cancelar:");

    if(scanf("%d",&tipo) != 1 || tipo < 0 || tipo > 3){
        printf("Tipo de carne inválido!\n");
        return 1;
    }else if(tipo == 0){
        printf("Pedido cancelado!\n");
        return 1;
    }

    printf("\nDigite a quantidade (Kg) ou 0 para cancelar o pedido:");

    if(scanf("%f",&quantidade) != 1 || quantidade <0){
        printf("Quantidade de carne inválido!\n");
        return 1;
    }else if(quantidade == 0){
        printf("Pedido cancelado!\n");
        return 1;
    }

    if(tipo == 1 && quantidade <= 5)
        valor = quantidade*34.90;
    else if(tipo == 1 && quantidade >5)
        valor = quantidade*35.80;
    else if(tipo == 2 && quantidade <=5)
        valor = quantidade*44.90;
    else if(tipo == 2 && quantidade > 5)
        valor = quantidade*46.80;
    else if(tipo == 3 && quantidade <=5)
        valor = quantidade*66.90;
    else if(tipo == 3 && quantidade > 5)
        valor = quantidade*67.80;
    else{
        printf("Erro no sistema das três primeiras entradas ou calculos.\n");
        return 1;
    }

    desconto = valor*5/100;
    descontado = valor-desconto;

    printf("\nSua compra deu o valor de R$%.2f\nQual o método de pagamento?Digite:\n0 - Cancelar pedido.\n1-Cartão Tabajabara(Você economiza R$%.2f, Porque irá pagar apenas R$%.2f).\n2-Crédito.\n3-Débito.\n4-Dinheiro:", valor, desconto, descontado);

    if(scanf("%d",&pagamento) != 1 || pagamento < 0 || pagamento > 4){
        printf("Forma de pagamento inválida!\n");
        return 1;
    }else if(pagamento == 0){
        printf("Compra cancelada!\n");
        return 1;
    }

    //Nota fiscal⮯
    
    printf("\nNota fiscal:\n\n");

    printf("Tipo de carne: ");

    if(tipo == 1)
        printf("File duplo.\n");
    else if(tipo == 2)
        printf("Alcatra.\n");
    else if(tipo == 3)
        printf("Picanha.\n");

    printf("Quantidade de carne comprada: Kg%.2f\n", quantidade);
    printf("Forma de pagamento: ");

    if(pagamento == 1)
        printf("Cartão Tajabara.\n");
    else if(pagamento == 2)
        printf("Crédito.\n");
    else if(pagamento == 3)
        printf("Débito.\n");
    else if(pagamento == 4)
        printf("Dinheiro.\n");

    printf("Valor total: R$%.2f\n", valor);
    
    if(pagamento == 1){
        printf("Valor do desconto: R$%.2f\n", desconto);
        printf("Valor pago: R$%.2f\n", descontado);
    }else
        printf("Valor pago: R$%.2f\n", valor);


    return 0;
}