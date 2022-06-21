#include <stdio.h>
#include <string.h>

void replace(char *string, int *numero){
    int i;

    for(i=0; i<strlen(string); i++){
        if(*(string+i)==' '){
            *(string+i) = '-';
            *numero+=1;
        }
    }

}


int main(){

    char nome[30];
    int valor = 0,
    *num;

    num = &valor;
    printf("valor de num %d", num);

    printf("Escreva uma frase: ");
    gets(nome);

    replace(nome, num);

    printf("Numero de caracteres em branco: %i, palavra: %s", valor, nome);
}
