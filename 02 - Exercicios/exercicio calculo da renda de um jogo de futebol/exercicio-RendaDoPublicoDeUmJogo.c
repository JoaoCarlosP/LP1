#include <stdio.h>

void main (){
    float pub_total, renda;

    printf("Digite o publico total: ");
    scanf("%f", &pub_total);

    renda = (pub_total * 0.1 * 5) + (pub_total * 0.5 * 10) + (pub_total * 0.3 * 20) + (pub_total * 0.1 * 30);

    printf("A renda foi de: R$% .2f", renda);
}