#include <stdio.h>

int main(){

    char vetorchar[50];
    char vetor1[10];


    vetor1[0]='J';
    vetor1[1]='o';
    vetor1[2]='a';
    vetor1[3]='o';
    vetor1[4]='\0';
    printf("\nNome: %s", vetor1);

    printf("\n\nInforme um nome: ");

    //scanf("%s", vetorchar);       N�o aceita espa�o.
    gets(vetorchar);              //Aceita espa�o.

    printf("\nNome: %s", vetorchar);

    return 0;
}
