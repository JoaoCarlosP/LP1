#include <stdio.h>

char fSubstring(char vetPalavra[20], int posInicial, int posFinal, char vetDestino[10]){
    int i, t;

    vetDestino[posFinal+1] = '\0';

    for(i=posInicial, t=0; i<=posFinal; i++, t++){
        vetDestino[t] = vetPalavra[i];
    }

    printf("\n\n%s", vetDestino);   //Há situaçoes onde se pega uma parte certa da palavra, mas coloca algum digito aleatorio no final... Tamanho do vetor talvez?
}

void main(){

    char palavra[20],
    destino[10];
    int posicaoInicial=0,
    posicaoFinal=0;

    printf("Digite uma palavra: ");
    gets(palavra);

    printf("\nDigite posicao inicial: ");
    scanf("%i", &posicaoInicial);
    printf("\nDigite posicao Final: ");
    scanf("%i", &posicaoFinal);

    //printf("\n\npalavra: %s \npi: %i \npf: %i", palavra, posicaoInicial, posicaoFinal);

    fSubstring(palavra, posicaoInicial, posicaoFinal, destino);
}
