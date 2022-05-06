#include <stdio.h>

int main(){
    char palavra[50], letraProcurada;
    int  i, qtdeLetra = 0;

    printf("\nDigite uma palavra: ");
    gets(palavra);

    printf("Digite uma letra: ");
    scanf("%c", &letraProcurada);

    for (i=0; i<50; i++)
    {
        if(palavra[i] == '\0')
            break;
        if(palavra[i] == letraProcurada)
            qtdeLetra++;
    }
    printf("Quantidade de Letras: %i\n\n", qtdeLetra);
}

