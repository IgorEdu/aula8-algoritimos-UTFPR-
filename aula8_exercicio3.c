/*3. Fazer um programa que:
a) leia o valor de X de uma unidade de entrada;
b)calcule e escreva o valor do seguinte somatório:
X 25
1 − X 24
2
+ X 23
3 − X 22
4
+ ...+ X
25*/

#include<stdio.h>
#include<stdlib.h>
#includ<math.h>
int main(){
    int EXP, DEN, X;
    float SOMA;
    EXP = 25;
    DEN = 1;
    SOMA = 0;
    printf("Digite o valor de X: ");
    scanf("%d", &X);
    do{
        if(DEN % 2 == 0){
            SOMA = SOMA - (pow(X, EXP)/DEN);
            printf(" - ");
            }
        else{
            SOMA = SOMA + (pow(X, EXP)/DEN);
            printf(" + ");
            }
        printf("(%d^%d)/%d\n", X, EXP, DEN);
        EXP--;
        DEN++;
    }while(DEN <= 25);
    printf("\n\nSOMA = %.2f\n", SOMA);
    system("pause");
    return 0;
}
