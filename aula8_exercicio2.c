/*Fazer um programa que calcule e escreva a soma dos 50 primeiros termos da seguinte série:
S= 1000/1 – 997/2 + 994/3 -991/4 ...
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int NUM, DEN, CONT;
    float SOMA;
    CONT = 0;
    NUM = 1000;
    DEN = 1;
    SOMA = 0;
    do{
        if(DEN % 2 == 0)
            SOMA -= NUM/DEN;
        else
            SOMA += NUM/DEN;
        printf("%d/%d\n", NUM, DEN);
        NUM-=3;
        DEN++;
        CONT++;
    }while(CONT < 50);
    printf("\n\nSOMA = %.2f\n", SOMA);
    system("pause");
    return 0;
}
