#include <stdio.h>
#include <string.h>

char fSobrenomeNome(char nome[50]){
    char espaco = ' ',
    primeiroNome[50],
    ultimoNome[50];
    int i, ultimoEspaco, z=0;

    for(i=0; i<strlen(nome); i++)           //atribui o primeiro nome
    {
        primeiroNome[i] = nome[i];

        if(nome[i] == espaco){             //SE for igual a espaco, coloca '\0'
            primeiroNome[i] = '\0';
            break;
        }
    }

    for(i=strlen(nome); i>0; i--){          //Procura a posicao do indice do ultimo espaço do nome
        if(nome[i] == espaco){
            ultimoEspaco = i;
            break;
        }
    }

    for(i=ultimoEspaco+1; i<strlen(nome); i++, z++){        //atribui o ultimo nome a partir do valor do ultimo espaco +1
        ultimoNome[z] = nome[i];
    }

    ultimoNome[z] = '\0';                    //coloca um '\0' na primeira posicao que seja depois do ultimo caracter do sobrenome

    printf("\n\n%s, %s\n\n", ultimoNome, primeiroNome);
}

void main(){
    char nomeCompleto[50];

    printf("Digite seu nome: ");
    gets(nomeCompleto);

    fSobrenomeNome(nomeCompleto);
}
