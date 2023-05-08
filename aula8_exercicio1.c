#include <stdio.h>
#include <stdlib.h>

int main(){
    int RA, ALTURA, CONT, MAIOR_ALT, MENOR_ALT, RA_MAIOR_ALT, RA_MENOR_ALT;
    CONT = 0;
    MAIOR_ALT = 0;
    MENOR_ALT = 300;
    do{
        printf("Digite o RA do aluno:");
        scanf("%d", &RA);
        printf("Digite a altura:");
        scanf("%d", &ALTURA);

        if(ALTURA > MAIOR_ALT){
            MAIOR_ALT = ALTURA;
            RA_MAIOR_ALT = RA;
        }
        if(ALTURA < MENOR_ALT){
            MENOR_ALT = ALTURA;
            RA_MENOR_ALT = RA;
        }
        CONT++;
    }while(CONT < 5);
    printf("O aluno: %d tem: %d centimetros e e o mais alto da turma\n", RA_MAIOR_ALT, MAIOR_ALT);
    printf("O aluno: %d tem: %d centimetros e e o mais baixo da turma\n", RA_MENOR_ALT, MENOR_ALT);

    system("pause");
    return 0;
}
