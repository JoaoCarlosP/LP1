#include <stdio.h>
#include <string.h>

int main(){
    typedef struct {
        int num;
        char descr[25];
        double valor;
        int qtdes[12];
    } TProd;

    /*======== Exercicio 2 =======*/

    //Exercicio (a)
    TProd vProd;

    vProd.num = 1453;
    strcpy(vProd.descr, "Pino de aco 8mm");
    vProd.valor = 5.32;
    vProd.qtdes[0] = 120;
    vProd.qtdes[1] = 89;
    vProd.qtdes[2] = 72;
    vProd.qtdes[3] = 15;
    vProd.qtdes[4] = 32;
    vProd.qtdes[5] = 33;
    vProd.qtdes[6] = 44;
    vProd.qtdes[7] = 566;
    vProd.qtdes[8] = 281;
    vProd.qtdes[9] = 32;
    vProd.qtdes[10] = 10;
    vProd.qtdes[11] = 29;

    //Exercicio (b)
    int i;
    for(i = 0; i<12; i++){
        vProd.qtdes[i] = 0;
    }

    //Exercicio (c)
    strupr(vProd.descr);

    //Exercicio (d)
    int soma = vProd.qtdes[0],
    menorQtde = vProd.qtdes[0],
    maiorQtde = vProd.qtdes[0];

    for(i = 1; i<12; i++){
        soma += vProd.qtdes[i];
        if(vProd.qtdes[i] < menorQtde)
            menorQtde = vProd.qtdes[i];
        if(vProd.qtdes[i] > maiorQtde)
            maiorQtde = vProd.qtdes[i];
    }

    //Exercicio (e)
    vProd.num = 0;
    strcpy(vProd.descr, '\0');
    vProd.valor = 0.0;
    for(i=0; i<12; i++)
        vProd.qtdes[i] = 0;


    /*======== Exercicio 3 =======*/

    TProd produtos[10];

    //Exercicio (a)
    produtos[5].num = 4368;

    //Exercicio (b)
    produtos[8].qtdes[7] = 182;

    //Exercicio (c)
    for(i = 0; i<12; i++){
        produtos[3].qtdes[i] = 0;
    }
    //Exercicio (d)
    float valorTotal = 0.0;
    for(i = 0; i<12; i++){
        valorTotal += produtos[4].qtdes[i];
    }
    valorTotal = valorTotal * produtos[4].valor;


}

