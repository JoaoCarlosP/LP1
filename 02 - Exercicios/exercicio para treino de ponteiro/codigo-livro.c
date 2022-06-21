#include <stdio.h>
#include <string.h>

int acumulador(char *codeLivro);

int main(){
    char codigo[12], *pcodigo = codigo;

    printf("Digite o codigo de identificacao do livro: ");
    gets(codigo);

    while(strcmp(strupr(codigo), "FIM")!= 0){
        acumulador(pcodigo);
        printf("\n\nDigite o codigo de identificacao do livro: ");
        gets(codigo);
    }
}

int acumulador(char *codeLivro){
    int i, j, s1=0, s2=0;
    char numeros[11] = {"0123456789"};
                        //013162959-X
    for(i=0; i<strlen(codeLivro); i++){
        for(j=0; j<strlen(numeros); j++){
            if(*(codeLivro+i) == '-')
                continue;
            else if(*(codeLivro+i) == 'X'){
                s1 += 10;
                s2 += s1;
                break;
            }
            else if(*(codeLivro+i) == numeros[j]){
                s1 += j;
                s2 += s1;
                break;
            }
        }
    printf("\nAcumuladors1: %d", s1);
    }
    printf("\nValor final de s2: %d", s2);
    if(s2 % 11 == 0){
        printf("\n\nISBN %s eh valido!", codeLivro);
    }
    else
        printf("\n\nISBN invalido: %d", s2 % 11);
}

