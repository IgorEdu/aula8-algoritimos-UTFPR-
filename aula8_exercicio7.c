/*7. Fulano tem 1,50 metro e cresce 2 centímetros por ano, enquanto Ciclano tem 1,10 metro e cresce
3 centímetros por ano. Construa um programa que calcule e imprima quantos anos serão
necessários para que Ciclano seja maior que Fulano.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int FULANO, CICLANO, CONT;
    FULANO = 150;
    CICLANO = 110;
    CONT = 1;

    do{
        FULANO+= 2;
        CICLANO+=3;
        CONT++;
    }while(CICLANO <= FULANO);

    printf("Serao necessarios %d anos para Ciclano ser maior que Fulano.\n", CONT);
    printf("Ao final do periodo Ciclano tera %d de altura e Fulano tera %d.\n", CICLANO, FULANO);

    system("pause");
    return 0;
}
