//3. Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias.

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int x, Idade_ano;

    system("cls");
    printf("\n");
    for(int i=0; i<100; i++){
        printf("-");
    }
    printf("\nDigite sua idade expressa em anos: ");
    scanf("%i", &Idade_ano);

    x = Idade_ano * (365 + (1/4)-(1/100)+(1/400));

    printf("\nA idade convertidad de ano(s) para dia(s) eh de: %d", x);
    printf("\n");
    for(int i=0; i<100; i++){
        printf("-");
    }
    printf("\n\n");

    return 0;
}