#include <stdio.h>
#include <string.h>

    //=================== Exercicios da atividade 8 =========================

   /*EXERCICIO 01

    float valores[10], *p;
    p = &valores[0];                //ponteiro recebe endereco do indice 0
    printf("\n\n%p %p\n", valores, p);
    p = valores;                    //ponteiro também recebe endereco do indice 0
    printf("%p %p\n", valores, p);


    p = &valores[1];                //AQUI ponteiro recebe end. do indice 1
    printf("%x %p\n", p - valores, p);//%x transforma hexadecimal para um numero inteiro


    p = &valores[6];                //Ponterio recebe end. do indice 6
     printf("%x %p\n", p - valores, p);
     */



    //EXERCICIO 05
void cripto(char *string)
{
    strrev(string);


}

int main()
{
    char frase[100];

    printf("\n\nInforme uma string: ");
    gets(frase);

    cripto(frase);
    printf("String revertida: %s\n", frase);
}
