#include <stdio.h>
#include <ctype.h>

void main(){
    char palavra[50], letraProcurada;
    int  i, qtdeLetra = 0;

    printf("Digite uma palava: ");
    gets(palavra);
    printf("Digite uma letra: ");
    scanf("%c", &letraProcurada);

    for(i=0; i<50; i++){                    //For que verifica a quantidade de letras dentro do vetor
        if (palavra[i] == '\0')
            break;
        if (palavra[i] == letraProcurada){
            qtdeLetra++;
        }
    }

    if(qtdeLetra > 0){  //Verificação do caracter inserido.

        int vetorArmazena[qtdeLetra], z;        //Cria vetor com a quantidade necessária de indíces com base na qtde de letras

        for(i=0, z=0; i<strlen(palavra[]); i++){               //For que atribui o valor do indice da letra procurada dentro do vetor de armazenamento.
            if (palavra[i] == letraProcurada){
                vetorArmazena[z] = i;
                z++;
            }
        }

        printf("\nIndices onde ocorrem o caracter informado: ");

        for(i=0; i<qtdeLetra; i++){
            printf("%i ", vetorArmazena[i]);
        }
    }
    else
        printf("\nCaracter informado nao existe dentro da palavra");

    printf("\n\n");
}








