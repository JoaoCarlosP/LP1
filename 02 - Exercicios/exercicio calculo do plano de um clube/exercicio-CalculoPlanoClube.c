#include <stdio.h>

void main (){

//declara variáveis
  char plano;
  int idade, numDependentes;
  float totPago;


  printf("Digite sua idade: ");
  scanf("%i", &idade);

  printf("Digite o numero de dependentes: ");
  scanf("%i", &numDependentes);

  if(idade >=16 && idade < 20){
    plano = 'j';

  }
  else{
    plano = 'a';
    if (numDependentes == 0)
    {
        totPago = 300 + ((60*0.9*6) + 60 * 6);
    }
    else {
        totPago = 300 + ((60 + 60 * numDependentes)*12);
    }
  }
  printf("\nSeu plano e: %c", plano);
  printf("\nSeu numero de dependetes e: %i", numDependentes);
  printf("\nO total a pagar e: %.2f", totPago);
}