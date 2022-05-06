#include <stdio.h>

void main(){
    int vetorNum[6];
    char vetorChar[6];
    int i, z;

    for (i=0; i<6; i++){
        printf("Digite o %io numero: ", i+1);
        scanf("%i", &vetorNum[i]);
    }

    printf("\n");

    for (i=0; i<6; i++){
        printf("Digite o %io caracter: ", i+1);
        scanf(" %c", &vetorChar[i]);
    }
    printf("\n\n");
    for(i=0;i<6;i++){
        for(z=0;z<vetorNum[i];z++){
            printf(" %c", vetorChar[i]);
        }
    printf("\n");
    }
}


