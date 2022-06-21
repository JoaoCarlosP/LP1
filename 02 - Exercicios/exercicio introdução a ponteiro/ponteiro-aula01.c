#include <stdio.h>

int main()
{
    int num = 10, *pontNum;                 //Ponteiros recebem endereços
    char letra = 'A', *pontLetra;           //de memória do mesmo tipo.

    pontNum = &num;                         //Usar '&' para acessar o endereco
    pontLetra = &letra;                     //da memória, e NAO o valor da variavel

    /*-------------- Acessando o Valor e os endereços das variáveis normalmente -----------*/

    //Exibindo os valores armazenados nas memórias
    printf("\nConteudo da variavel Numero: %i", num);
    printf("\nConteudo da variavel Letra: %c", letra);

    //Dessa forma estamos exibindo o endereço de memória das variáveis
    printf("\n\nEndereco da variavel Numero: %p", &num);
    printf("\nEndereco da variavel Letra: %p\n", &letra);

    /*-------------- Acessando o Valor e os endereços das variáveis através de Ponteiros -----------*/

    //Exibindo o valor da variável que eles estão apontando
    printf("\nValor da variavel que o ponteiro numero esta apontando: %i", *pontNum);
    printf("\nValor da variavel que o ponteiro letra esta apontando: %c\n", *pontLetra);

    //Ponteiros armazenam em sua memória endereços de memória de variáveis
    printf("\nPonteiro Numero armazena o endereco de memória uma variavel: %p", pontNum);
    printf("\nPonteiro Letra armazena o endereco de memória uma variavel: %p\n", pontLetra);


    /*-------Acessando o endereço de memória dos ponteiros-------*/

    printf("\nAcessando o endereco de memoria Ponteiro Numero: %p", &pontNum);
    printf("\nAcessando o endereco de memoria do Ponteiro Letra: %p\n", &pontLetra);

}
