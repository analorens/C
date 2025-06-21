#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct{

  char  nomeCompanhia[51];
  char  areaAtuacao[31];
  float valorAtual;
  float valorAnterior;
  double variacaoPorcentagem;   
} Acao;

int main(void){

    Acao controle;


    printf("Digite o nome da companhia: ");
    scanf(" %[^\n]", controle.nomeCompanhia);

getchar();

    printf("Digite a area de atuacao: ");
    scanf(" %[^\n]",controle.areaAtuacao);

    printf("Digite o valor atual da acao: ");
    scanf("%f", &controle.valorAtual);

    printf("Digite o valor anterior da acao: ");
    scanf("%f", &controle.valorAnterior);


    controle.variacaoPorcentagem = ((controle.valorAtual - controle.valorAnterior) / controle.valorAnterior) * 100;


    printf("Nome da companhia: %s. \n", controle.nomeCompanhia);
    printf("Area de atuacao: %s. \n", controle.areaAtuacao);
    printf("Valor atual da acao: %.2f. \n", controle.valorAtual);
    printf("Valor anterior da acao: %.2f. \n", controle.valorAnterior);
    printf("Variacao em porcentagem: %.2lf%%. \n", controle.variacaoPorcentagem);


return 0;
}