#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int TAM = 25;   //globais
int TAM2 = 50;

void main(){
    int vetorA[TAM], vetorB[TAM], vetorC[TAM2];
    int i,contA=0,contB=0;

    /*-----------Gerar Valores aleatório---------------*/

    for(i=0; i < TAM; i++){
        vetorA[i] = rand() % 100;
        vetorB[i] = rand() % 90;
    }

    /*--------------------Lógica---------------------*/

    for(i=0; i < TAM2; i++){

        if(i % 2 == 0){
            vetorC[i] = vetorA[contA];
            contA++;
        }
        else{
            vetorC[i] = vetorB[contB];
            contB++;
        }
    }

    /*--------------Exibe valores-------------------*/

    printf("\nVetor A\n");

    for(i = 0;i < TAM; i++){
        printf("A%d ", vetorA[i]);
    }

    printf("\n\nVetor B\n");

    for(i = 0;i < TAM; i++){
        printf("B%d ", vetorB[i]);
    }

    printf("\n\n\nVetor C\n");

    for(i = 0;i < TAM2; i++){
    printf("C%d ", vetorC[i]);
    }

    printf("\n\n\n");
}
