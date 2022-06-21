#include <stdio.h>
#include <string.h>

int Cripto(char *txt, char *criptografia){
    int i,z;

    char controle1[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"},
         controle2[] = {"~a<23>7nys-k954s!t@#h$%&.z"};

    strcpy(criptografia, txt);

    for(i=0; i<strlen(criptografia);i++){
            for(z=0; z<strlen(controle1); z++){
                if(*(criptografia+i) == controle1[z]){
                    *(criptografia+i) = controle2[z];
                    break;
                }
                else if(*(criptografia+i)== controle2[z]){
                        *(criptografia+i) = controle1[z];
                        break;
                }
            }
        }
        criptografia[i] = '\0';
}

int main()
{
    char texto1[9], texto2[9], texto3[9];
    printf( "Informe um texto de até 8 caracteres:" ) ;
    gets(texto1);
    Cripto( texto1, texto2 ) ;
    Cripto( texto2, texto3 ) ;
    printf( "O texto criptografado eh: \n%s\n e descriptografado eh: \n%s\n", texto2, texto3 ) ;
    return 0 ;
}
