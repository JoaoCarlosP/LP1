#include <stdio.h>

int main()
{
    int num = 10, *pontNum;                 //Ponteiros recebem endere�os
    char letra = 'A', *pontLetra;           //de mem�ria do mesmo tipo.

    pontNum = &num;                         //Usar '&' para acessar o endereco
    pontLetra = &letra;                     //da mem�ria, e NAO o valor da variavel

    /*-------------- Acessando o Valor e os endere�os das vari�veis normalmente -----------*/

    //Exibindo os valores armazenados nas mem�rias
    printf("\nConteudo da variavel Numero: %i", num);
    printf("\nConteudo da variavel Letra: %c", letra);

    //Dessa forma estamos exibindo o endere�o de mem�ria das vari�veis
    printf("\n\nEndereco da variavel Numero: %p", &num);
    printf("\nEndereco da variavel Letra: %p\n", &letra);

    /*-------------- Acessando o Valor e os endere�os das vari�veis atrav�s de Ponteiros -----------*/

    //Exibindo o valor da vari�vel que eles est�o apontando
    printf("\nValor da variavel que o ponteiro numero esta apontando: %i", *pontNum);
    printf("\nValor da variavel que o ponteiro letra esta apontando: %c\n", *pontLetra);

    //Ponteiros armazenam em sua mem�ria endere�os de mem�ria de vari�veis
    printf("\nPonteiro Numero armazena o endereco de mem�ria uma variavel: %p", pontNum);
    printf("\nPonteiro Letra armazena o endereco de mem�ria uma variavel: %p\n", pontLetra);


    /*-------Acessando o endere�o de mem�ria dos ponteiros-------*/

    printf("\nAcessando o endereco de memoria Ponteiro Numero: %p", &pontNum);
    printf("\nAcessando o endereco de memoria do Ponteiro Letra: %p\n", &pontLetra);

}
