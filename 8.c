#include <stdio.h>

int main (){

    float distancia=0,consumo=0,preco=0,custo=0;

    printf("Vamos ver quanto custou a sua viajem de carro!\nQual foi a distância percorrida em Km?\nResposta:");
    
    if(scanf("%f", &distancia) != 1 || distancia <= 0){
        printf("Valor invalido!\n\n\n");
        return 1;
    }

    printf("Agora, quanto seu carro consome em Km por litro?\nResposta:");

    if(scanf("%f", &consumo) != 1 || consumo <= 0){
        printf("Valor invalido!\n\n\n");
        return 1;
    }

    printf("E quanto está o preço do combustível?\nResposta:");

    if(scanf("%f", &preco) != 1 || preco <= 0){
        printf("Valor invalido!\n\n\n");
        return 1;
    }

    custo = (distancia/consumo)*preco;

    printf("Sua viajem custou, aproximadamente, %.2f\n\n\n", custo);

    
    return 0;
}