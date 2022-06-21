#include <stdio.h>
#include <string.h>
#include <ctype.h>

char substring(char *ponteiro);

void main(){

    char string[50];

    substring(string);
    printf("\n\nString: %s", string);
}


char substring(char *ponteiro){
    int i, z=0;
    char palavra[50];

    printf("\nDigite uma palavra: ");
    gets(palavra);


    for(i=strlen(palavra)-1; i>=0; i--){
        *(ponteiro+z) = palavra[i];

        if(tolower(*(ponteiro+z)) == 'a' || tolower(*(ponteiro+z)) == 'e' || tolower(*(ponteiro+z)) == 'i' ||
           tolower(*(ponteiro+z)) == 'o' || tolower(*(ponteiro+z)) == 'u')
            *(ponteiro+z) = '#';

        z++;
    }
    *(ponteiro+z) = '\0';
}
