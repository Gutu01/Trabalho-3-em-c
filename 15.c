#include <stdio.h>

int main(){

    char sexo;

    printf("Digite F para feminino ou M para masculino:");

    if(scanf("%c", &sexo) != 1){
        printf("Não válido!\n");
        return 1;
    }

    if(sexo == 'M' || sexo == 'm')
        printf("Masculino\n");
    else if(sexo == 'F' || sexo == 'f')
        printf("Feminino\n");
    else
        printf("Não válido!\n");



    return 0;
}