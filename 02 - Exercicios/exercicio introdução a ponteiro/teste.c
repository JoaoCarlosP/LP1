#include <stdio.h>
#include <string.h>

int main(){

    int x=10, *px=&x;
    float y=5.9, *py=&y;

    printf("%p\n", &px);   //  Mostra o endere�o de px
    printf("%p\n", px);    //  Mostra o endere�o de x
    printf("%i", *px);   //  Mostra o valor da vari�vel X
}
