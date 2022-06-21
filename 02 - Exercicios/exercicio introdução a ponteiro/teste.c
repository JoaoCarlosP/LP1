#include <stdio.h>
#include <string.h>

int main(){

    int x=10, *px=&x;
    float y=5.9, *py=&y;

    printf("%p\n", &px);   //  Mostra o endereço de px
    printf("%p\n", px);    //  Mostra o endereço de x
    printf("%i", *px);   //  Mostra o valor da variável X
}
