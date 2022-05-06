#include <stdio.h>

int main(){
    char string[50], caracter;
    int  i, qtdeVogais = 0, consoantes = 0;

    printf("Digite uma string: ");
    gets(string);
    printf("\nDigite um caracter: ");
    scanf("%c", &caracter);

    for (i=0; i<50; i++)
    {
        if(string[i] == '\0')
            break;

        if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' ||
           string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U'){
            qtdeVogais += 1;
            string[i] = caracter;
           }
        else
            consoantes += 1;
    }

    printf("\n\nA palavra inserida tem %i vogais e %i consoantes.\n\n", qtdeVogais, consoantes);
    printf("\nA palavra inserida teve suas vogais substituidas pelo caracter '%c' e ficou: %s\n\n", caracter, string);

}
