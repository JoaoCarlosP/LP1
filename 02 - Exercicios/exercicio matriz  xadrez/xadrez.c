#include <stdio.h>

void main(){

    int linha, coluna, numero;
    int tab[8][8];
    int ausencia = 0, peoes = 0, cavalos = 0, torres = 0, bispos = 0, reis = 0, rainhas = 0;

    for (linha = 0; linha < 8; linha++){
        for (coluna = 0; coluna < 8; coluna++){
            scanf("%i", &numero);
            tab[linha][coluna] = numero;

            switch (numero){

                case 0:
                    ausencia++;
                    break;
                case 1:
                    peoes++;
                    break;
                case 2:
                    cavalos++;
                    break;
                case 3:
                    torres++;
                    break;
                case 4:
                    bispos++;
                    break;
                case 5:
                    reis++;
                    break;
                case 6:
                    rainhas++;
                    break;
            }
        }
    }

    printf("\n");

    for (linha = 0; linha < 8; linha++){
        for (coluna = 0; coluna < 8; coluna++){
            printf("[%i]", tab[linha][coluna]);
        }
        printf("\n");
    }

    printf("\n\nAusencia de Pedras: %i pecas \nPeoes: %i pecas \nCavalos: %i pecas \nTorres: %i pecas \nBispos: %i pecas \nReis: %i pecas \nRainhas: %i pecas \n\n", ausencia, peoes, cavalos, torres, bispos, reis, rainhas);
}


