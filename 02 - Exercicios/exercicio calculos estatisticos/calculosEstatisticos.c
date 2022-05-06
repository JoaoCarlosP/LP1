#include <stdio.h>
#include <math.h>

/*---------------------Funcoes-----------------*/

float fentradaDados(float vet[5]){

    int cont;

    for(cont = 0; cont < 5; cont++){
        printf("Digite o %do valor: ", cont+1);
        scanf("%f", &vet[cont]);
    }

    for(cont = 0; cont < 5; cont++){
        printf("\n%do valor [%.1f]", cont+1, vet[cont]);
    }

    printf("\n"); //pula linha
}

//Funcao da media aritmetica

float fmediaAritmetica(float vet[5]){
    int cont;
    float soma = 0, qtdeValor = 0, media;


    for (cont = 0; cont < 5; cont++){
        soma += vet[cont];
        qtdeValor = cont+1;
    }

    media = soma / qtdeValor;
    printf("\nA media aritmetica e: %.2f ", media);

    printf("\n"); //pula linha

    return media;
}


//funcao do desvio padrao

float fdesvioPadrao(float vet[5]){
    int cont;
    float desvio[5], media;

    media = fmediaAritmetica(vet);

    for (cont = 0; cont < 5; cont++){       //Calculo de todos os desvios
        desvio[cont] = vet[cont] - media;   //diferenca da media para cada desvio

        if (desvio[cont] < 0)
            desvio[cont] = desvio[cont] * -1;

        printf("\n %d desvio: %.2f", cont+1, desvio[cont]);
    }

    float variancia = 0, desvioPadrao;          //Calculo da variancia
    int qtdeDesvio = 0;

        for (cont = 0; cont < 5; cont++){       //soma de todos os desvios elevados ao quadrado
            variancia += pow(desvio[cont],2);
            qtdeDesvio = cont+1;
        }
        printf("\n\nO valor da variancia e: %.2f", variancia);

        desvioPadrao = variancia / qtdeDesvio;  //Calculo do Desvio Padrao
        printf("\n\nO valor do Desvio Padrao e: %f", desvioPadrao);
}


//funcao do maior e menor

float fmaiorMenor (float vet[5]){
    float maior = 0, menor = 1000;
    int cont;

   for (cont = 0; cont < 5; cont++){
        if (vet[cont] > maior)
            maior = vet[cont];
        if (vet[cont] < menor)
            menor = vet[cont];
    }

    printf("\nO maior valor e: %.1f", maior);
    printf("\nO menor valor e: %.1f", menor);

    printf("\n"); //pula linha
}

/*---------------------Main-----------------*/

void main(){
    float vetor[5];
    int opcao;

    printf("\n Escolha uma opcao abaixo: \n\n 1 - Entrar com os dados\n 2 - Calcular a media aritmetica simples\n 3 - Calcular a media ponderada dos dados\n 4 - Calcular o desvio padrao\n 5 - Achar o maior valor e menor valor\n 6 - Sair do programa\n\n");
    scanf("%i", &opcao);

    while(opcao < 6){
        switch(opcao){

            case 1:
                fentradaDados(vetor);
                break;
            case 2:
                fmediaAritmetica(vetor);
                break;
            case 4:
                fdesvioPadrao(vetor);
                break;
            case 5:
                fmaiorMenor(vetor);
                break;
        }

        printf("\n\n========================Fim da Operacao=============================\n");
        printf("\n\n Escolha outra opcao: \n\n 1 - Entrar com os dados\n 2 - Calcular a media aritmetica simples\n 3 - Calcular a media ponderada dos dados\n 4 - Calcular o desvio padrao\n 5 - Achar o maior valor e menor valor\n 6 - Sair do programa\n\n");
        scanf("%i", &opcao);
    }
    if (opcao == 6)
        printf("\n\nFim do Programa.\n\n");
}
