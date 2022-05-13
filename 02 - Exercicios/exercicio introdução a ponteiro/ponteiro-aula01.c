#include <stdio.h>

int main()
{
    int num = 10, *pontNum;                 //Ponteiros recebem endereços
    char letra = 'A', *pontLetra;           //de memória do mesmo tipo.

    pontNum = &num;                         //Usar '&' para acessar o endereco
    pontLetra = &letra;                     //da memória, e NAO o valor da variavel

    printf("\nConteudo da variavel Numero: %i", num);
    printf("\nConteudo da variavel Letra: %c", letra);

    printf("\n\nEndereco da variavel Numero: %p", &num);
    printf("\nEndereco da variavel Letra: %p\n", &letra);

    printf("\nConteudo da variavel Ponteiro Numero: %p", pontNum);
    printf("\nConteudo da variavel Ponteiro Letra: %p\n", pontLetra);

    printf("\nEndereco do Ponteiro Numero: %p", &pontNum);
    printf("\nEndereco do Ponteiro Letra: %p\n", &pontLetra);

    printf("\nConteudo da variavel do endreco do Ponteiro Numero: %p", *pontNum);
    printf("\nConteudo da variavel do endreco do Ponteiro Letra: %p\n", *pontLetra);

    scanf("%i", &num);
}
