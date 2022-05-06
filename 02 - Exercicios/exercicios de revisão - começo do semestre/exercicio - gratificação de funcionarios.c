#include <stdio.h>

void main (){
    int CodigoFun, TempoServ, Setor;
    float Salario, Indice, Gratificacao;

    printf("Digite o seu codigo: ");
    scanf("%i", &CodigoFun);


    while (CodigoFun > 99 && CodigoFun < 400)
    {
        printf("Digite o seu Tempo de Trabalho (em anos): ");
        scanf("%i", &TempoServ);

        printf("Digite o seu Salario: ");
        scanf("%f", &Salario);

        Setor = CodigoFun / 100;

        switch (Setor)
        {
            case 1:
                if (TempoServ <= 5){
                    Indice = 0.025;
                }
                else {
                    Indice = 0.045;
                }
            break;
            case 2:
                if (TempoServ <= 5){
                    Indice = 0.035;
                }
                else {
                    Indice = 0.055;
                }
            break;
            case 3:
                if (TempoServ <= 5){
                    Indice = 0.04;
                }
                else {
                    Indice = 0.065;
                }
            break;
        }

        Gratificacao = Salario * Indice;

        printf("Sua Gratificacao e de: R$ %.2f", Gratificacao);

        printf("\n\nDigite outro codigo: ");
        scanf("%i", &CodigoFun);
    }
    if (CodigoFun >= 400)
    {
        printf("Setor nao identificado.");
    }
    else{
        printf("Sessao interrompida.");
    }
}

