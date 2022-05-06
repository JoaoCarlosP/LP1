#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//34190.12345 12345.67890 12345.678901 1 12340000012345
void main(){

    char linhaDigitavel[53],
    banco[4] = "@@@\0",
    armazenaString[11];
    int i, t;
    float numero;

    printf("Digite os numeros do seu boleto: ");
    gets(linhaDigitavel);

    while(strcmp(linhaDigitavel, "FIM")!=0){

        strncpy(banco, linhaDigitavel, 3);              //Atribui o codigo da agencia no vetor Banco
        banco[4] = '\0';
        printf("\nCodigo da agencia: %s", banco);

        if(strcmp(banco, "001")==0)                     //Verifica qual e o bancp atraves do codigo
            printf("\nBanco: Banco do Brasil");
        else
            if(strcmp(banco, "033")==0)
                printf("\nBanco: Santander");
        else
            if(strcmp(banco, "104")==0)
                printf("\nBanco: Caixa Economica Federal");
        else
            if(strcmp(banco, "341")==0)
                printf("\nBanco: Itau");
        else
            if(strcmp(banco, "745")==0)
                printf("\nBanco: Citibank");


        for(i=43, t=0; i<53; i++, t++){                         //Separa o valor do boleto em outro caracter
            armazenaString[t] = linhaDigitavel[i];
            //printf("\nIndice %i do vetorArmazena: %c", t, armazenaString[t]); ===>>> Esta linha exibe a atribuicao do caracter no novo vetor
        }


        printf("\n\nValor do boleto: R$ %.2f", atof(armazenaString)/100);               //Exibe o valor do boleto
        printf("\nBoleto vencido! Multa = R$ %.2f\n", (atof(armazenaString)/100)*0.1);  //Exibe a multa de 10% do boleto

        printf("\n=================================================\n");
        printf("\nDigite o proximo boleto ou 'FIM' para sair do programa.\n\n");
        gets(linhaDigitavel);
    }




}
