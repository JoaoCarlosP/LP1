#include <stdio.h>
#include <stdlib.h>

int TAM = 20;   //Tamanho do vetor

void main(){
    int i,
    vetorA[20],
    vetorB[20],
    vetorC[20];

    //========= Gera numeros aleatórios ==========

    for(i=0; i < TAM; i++){
        vetorA[i] = rand() % 100;
        vetorB[i] = rand() % 90;
    }

    //=========== Soma dos vetores ==============

    for(i=0; i < TAM; i++){
        vetorC[i] = vetorA[i] + vetorB[i];
    }

    //=========== Exibir valores ==============

    printf("Vetor A\n");
    for(i=0; i < TAM; i++){
        printf("A%d ", vetorA[i]);
    }

    printf("\n\nVetor B\n");
    for(i=0; i < TAM; i++){
        printf("B%d ", vetorB[i]);
    }

    printf("\n\nVetor C\n");
    for(i=0; i < TAM; i++){
        printf("C%d ", vetorC[i]);
    }
    printf("\n");
}
