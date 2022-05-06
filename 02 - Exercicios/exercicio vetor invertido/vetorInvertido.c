#include <stdio.h>

void main(){
    float vetorA[5], vetorB[5];
    int i, z=0;

    for (i=0; i<5; i++){
        vetorA[i]=i+1;
        printf("%.f", vetorA[i]);
    }

    printf("\n\n");

    for(i=4; i>=0; i--){
        vetorB[z] = vetorA[i];
        printf("%.f", vetorB[z]);
        z++;
    }

}
