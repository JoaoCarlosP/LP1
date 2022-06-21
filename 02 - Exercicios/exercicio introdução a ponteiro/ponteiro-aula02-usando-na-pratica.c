#include <stdio.h>
#include <string.h>

int main()
{
    int vetInt[5] = {10, 20, 30, 40, 50};
    char vetChar[5] = {"Joao"};
    int *pont;
    char *p;

    printf("\nEndereco do nome do vetor vetInt: %p", vetInt);
    printf("\nEndereco do nome do vetor vetChar: %p", vetChar);

    for(int i = 0; i<5; i++)
    {                                               //vetInt[]+i
        printf("\nValor do vetInt: %i Endereco: %p", *(vetInt+i), vetInt+i);
    }
    pont = vetInt;  //Aponta para o 1º indice do vetInt;
    pont = vetInt+3;  //Aponta para o 3º indice do vetInt;

    printf("\n\nvetChar: %s", vetChar);
    p = vetChar;

    // '*p' é o mesmo de vetChar[0]

    while(*p != '\0'){
        printf("\n%c %p", *p, p );
        p++;    //Endereco + 1 (em hexa)
    }   //vetChar++ NÃO PODE

    for(int i = 0; i<strlen(vetChar); i++){
        printf("\n%c %p", *(vetChar+i), vetChar+i );
        p++;
    }

}
