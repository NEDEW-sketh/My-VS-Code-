#include<stdio.h>
#include<stdlib.h>

int main(void)
{

    /*-------------------------------------------------------------------------------------------*/

    int cordas, sopro, percussão;
    int violão, guitarra;
    int trompete, trombone, flauta;
    int bateria, pandeiro;
    int total, maior, menor;

    /*----------------------------------------------------------------------------------------*/

    system("cls");
    printf("\n/");
    for(int i=0; i<100; i++){
        printf("-");
    }
    printf("/\n\n");

    printf("Digite a quantidade de violao vendido(s): ");
    scanf("%d", &violão);
    printf("Digite a quantidade de guitarra vendido(s): ");
    scanf("%d", &guitarra);
    printf("Digite a quantidade de trompete vendido(s): ");
    scanf("%d", &trompete);
    printf("Digite a quantidade de trombone vendido(s): ");
    scanf("%d", &trombone);
    printf("Digite a quantidade de flauta vendido(s): ");
    scanf("%d", &flauta);
    printf("Digite a quantidade de bateria vendido(s): ");
    scanf("%d", &bateria);
    printf("Digite a quantidade de pandeiro vendido(s): ");
    scanf("%d", &pandeiro);

    /*----------------------------------------------------------------------------------*/

    //1° comparação
    if(violão>guitarra){
        maior = violão;
        menor = guitarra;
    } else{
        maior = guitarra;
        menor = violão;
    }   
     //2° comaração
    if (trompete > maior){
        maior = trompete;
    } else if (trompete < menor){
        menor = trompete;
    }

    //3° comparação
    if (trombone > maior){
        maior = trombone;
    } else if(trombone < menor){
        menor = trombone;
    }

    //4°comparação
    if(flauta > maior){
        maior = flauta;
    } else if (flauta < menor){
        menor = flauta;
    }

    //5° comparação
    if(bateria > maior){
        maior = bateria;
    }else if(bateria < menor){
        menor = bateria;
    }

    //6°comparação
    if(pandeiro > maior){
        maior = pandeiro;
    }else if(pandeiro < menor){
        menor = pandeiro;
    }

    /*----------------------------------------------------------------------------------------------------------*/

    cordas = violão + guitarra;
    sopro = trompete + trombone + flauta;
    percussão = bateria + pandeiro;
    total = cordas + sopro + percussão;

    /*-----------------------------------------------------------------------------------------------------------*/
    
    printf("\nO total de intrumentos de cordas vendido(s) eh de: %d", cordas);
    printf("\nO total de intrumentos de sopro vendido(s) eh de: %d", sopro);
    printf("\nO total de intrumentos de percussao vendido(s) eh de: %d", cordas);
    printf("\nO instrumento mais vendido foi: %d, %x", maior, maior);
    printf("\nO instrumento mais vendido foi: %d, %x", menor, menor);
    printf("\nO total de instrumentos vendidos eh de: %d\n", total);

    printf("\n/");
    for(int i=0; i<100; i++){
        printf("-");
    }  
    printf("/\n");

    return 0;
}