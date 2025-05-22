#include <stdio.h>

int main(){

    char periodo;

    printf("Digite M para matutino, V para \nvespertino ou N para nortuno:");

    scanf("%c", &periodo);

    if(periodo == 'M' ||  periodo == 'm')
        printf("Bom dia!\n");
    else if( periodo == 'V' || periodo == 'v')
        printf("Boa tarde!\n");
    else if( periodo == 'N' || periodo == 'n')
        printf("Boa noite!\n");
    else
        ("Valor inválido!\n");

    return 0;
}