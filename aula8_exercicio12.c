/*12. Fazer um programa em C que imprima os números perfeitos no intervalo de 1 a 1000.*/

#include<stdio.h>
#include<stdlib.h>

int verificaPerfeito(int NUMERO){
    int DIVISOR, SOMA;
    DIVISOR = 1;
    SOMA = 0;
    do{
        if(NUMERO%DIVISOR == 0)
            SOMA+=DIVISOR;
        DIVISOR++;
    }while(DIVISOR < (NUMERO-1));

    return SOMA;
}

int main(){
    int NUMERO,SOMA;
    NUMERO = 1;
    SOMA = 0;
    do{
        SOMA = verificaPerfeito(NUMERO);
        if(NUMERO == SOMA)
            printf("O numero %d eh um numero perfeito.\n", NUMERO);
        NUMERO++;
    }while(NUMERO < 1000);




    system("pause");
    return 0;
}
