/*11. Fazer um programa em C que verifique se um número é perfeito ou não*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int NUMERO, DIVISOR, SOMA;
    DIVISOR = 1;
    SOMA = 0;
    printf("Digite um numero:");
    scanf("%d", &NUMERO);

    do{
        if(NUMERO%DIVISOR == 0)
            SOMA+=DIVISOR;
        DIVISOR++;
    }while(DIVISOR < (NUMERO-1));
    if(NUMERO == SOMA)
        printf("O numero %d eh um numero perfeito.\n", NUMERO);
    else
        printf("O numero %d nao eh um numero perfeito.\n", NUMERO);


    system("pause");
    return 0;
}
