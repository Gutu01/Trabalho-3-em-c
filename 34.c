#include <stdio.h>

int main(){

    float litros=0,valor=0;
    char letra;
    
    printf("Número de litros vendidos:");

    if(scanf("%f", &litros) != 1 || litros <= 0){
        printf("Valor inválido!\n");
        return 1;
    }

    printf("Digite G para gasolina ou\nDigite A para álcool:");

    if(scanf(" %c", &letra) != 1 && letra != 'A' && letra != 'a' && letra != 'G' && letra != 'g'){
        printf("Valor inválido!\n");
        return 1;
    }

    if((letra == 'A' || letra == 'a') && litros <= 20)
        valor = litros*(1.9-1.9*3/100);
        //O desconto é de 3% por litro, então eu poderia só calcular o valor do litro com o desconto,
        //que é 1.843, mas dessa forma fica mais difícil de alterar o valor do desconto futuramente,
        //então coloquei 1.9 - o desconto que fica mais fácil para futuras alterações

    else if((letra == 'A' || letra == 'a') && litros > 20)
        valor = litros*(1.9-1.9*5/100);        
    else if((letra == 'G' || letra == 'g') && litros <= 20)
        valor = litros*(2.4-2.4*4/100);
    else if((letra == 'G' || letra == 'g') && litros > 20)
        valor = litros*(2.4-2.4*6/100);
    
        printf("O valor a ser pago na gasolina é %.2f\n", valor);

    return 0;
}