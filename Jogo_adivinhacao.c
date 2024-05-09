#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int dificuldade, tentativas, numerosecreto, i, numero, pontosperdidos = 0;
    float pontuacao;
    srand(time(0));
    numerosecreto = rand() % 100;
    printf("BEM VINDO AO JOGO DE ADIVINHACAO!\nSelecione a dificuldade:\n (1) Facil\n (2) Medio\n (3) Dificil\n");
    scanf("%d", &dificuldade);
    if(dificuldade==1)
        tentativas = 18;
    if(dificuldade==2)
        tentativas = 12;
    if(dificuldade==3)
        tentativas = 6;
    for( i=1 ; i<=tentativas && numerosecreto!=numero ; i++ ){
        printf("\nEssa eh sua tentativa numero %d\nDigite seu numero: ", i);
        scanf("%d", &numero);
        if(i==tentativas && numero!=numerosecreto)
            printf("\nSuas tentativas acabaram! PERDEU! O numero secreto era %d", numerosecreto);
        else if(numero<numerosecreto)
            printf("O numero secreto eh maior, tente novamente: \n");
        else if(numero>numerosecreto)
            printf("O numero secreto eh menor, tente novamente: \n");
        else if(numero==numerosecreto)
            printf("\nMUITO BEM!! VOCE ACERTOU!!");
        pontosperdidos = pontosperdidos + abs(numero - numerosecreto);
}
    pontuacao = ((101-tentativas) * (1000-pontosperdidos) )/10000.0 ;
    printf("Sua pontuacao eh %.2f", pontuacao);
    return 0;
}
