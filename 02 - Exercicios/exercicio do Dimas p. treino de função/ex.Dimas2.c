#include <stdio.h>

/*------------------Declarando as Fun��es------------------*/

void fDobro(){                              //Fun��o Dobro
    int Numero, Dobro;

    printf("\nDigite um numero: ");
    scanf("%d", &Numero);

    Dobro = Numero * 2;
    printf ("\nO dobro do numero %d e %d", Numero, Dobro);
}

float fCalcDesconto(float valor){       //Fun��o do Desconto
    float Desc;

    if (valor >= 800)
        Desc = 0.15 * valor;
    else
        Desc = 0;

    return Desc;
}


void fVenda(){                              //Fun��o Venda
    int Codigo, QtdeVendida;
    float PrecUnitario, ValCompra, ValPagar;

    printf("\nDigite um codigo: ");
    scanf("%d", &Codigo);

    printf("\nDigite a quantidade vendida: ");
    scanf("%d", &QtdeVendida);

    printf("\nDigite o preco unitario: ");
    scanf("%f", &PrecUnitario);

    ValCompra = PrecUnitario * QtdeVendida;

    float desconto = fCalcDesconto(ValCompra); //atribuindo o valor da function em uma vari�vel.

    ValPagar = ValCompra - desconto;


    printf ("\n\nValor da compra: R$ %.2f \nDesconto recebido: R$ %.2f ", ValCompra, desconto);
    printf("\nValor total a pagar e: R$ %.2f", ValPagar);
}

float fCalcMedia(float P1, float P2){   //Fun��o Calculo da Media
    return (P1 + P2) / 2;
}

void fMedia(){                  //Fun��o Media
    int Codigo;
    float Prova1, Prova2;

    printf("\nInforme o codigo: ");
    scanf("%i", &Codigo);

    while (Codigo > 0){
        printf("\nInforme a nota da prova 1: ");
        scanf("%f", &Prova1);

        printf("\nInforme a nota da prova 2: ");
        scanf("%f", &Prova2);

        float Media = fCalcMedia(Prova1, Prova2);
        printf("\nA media das provas e: %.2f", Media);

        if (Media >= 5)
            printf("\nAluno Aprovado!");
        else
            printf("\nAluno Reprovado!");

        printf("\n\n=============================\n\nInforme outro codigo ou digite zero para finalizar:");
        scanf("%i", &Codigo);
    }
}

void fTabuada(int num, int qtde){
    int cont, resultado;

    for (cont = 1; cont <= qtde; cont++){
        resultado = num * cont;

        printf("\n%d x %d = %d", num, cont, resultado);
    }
}

/* -------------------C�digo Principal---------------------*/

int main (){
    int Opcao, Numero, QtdeElem;

    printf("Digite a opcao: ");
    scanf("%d", &Opcao);

    while (Opcao < 5){
        switch (Opcao){
            case 1:
                fDobro();
                printf("\n\n========================================");
                break;
            case 2:
                fVenda();
                printf("\n\n========================================");
                break;
            case 3:
                fMedia();
                printf("\n\n========================================");
                break;
            case 4:
                printf("\n Informe um numero: ");
                scanf("%i", &Numero);
                printf("\n Informe a quantidade de elementos: ");
                scanf("%i", &QtdeElem);

                fTabuada(Numero, QtdeElem);
                printf("\n\n========================================");
                break;
        }

        printf("\n\nDigite de novo a opcao: ");
        scanf("%d", &Opcao);
    }
}
