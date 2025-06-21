#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{

    float x;
    float y;

} Ponto2d;

int main(void){

Ponto2d ponto_inicial;
Ponto2d ponto_final;
int opcao;

do{
    printf("1- Digitar os valores do ponto inicial.\n");
    printf("2- Digitar os valores do ponto final.\n");
    printf("3- Calcular e exibir a distancia entre os dois.\n");
    printf("4- Sair.\n");
    scanf("%d", &opcao);

switch (opcao){

case 1: 
    printf("Valores do ponto inicial:\n Digite os valores de X1 e Y1:");
    scanf("%f",&ponto_inicial.x);
    scanf("%f",&ponto_inicial.y);

    break;
case 2: 
    printf("Valores do ponto final:\n Digite os valores de X2 e Y2: ");
    scanf("%f", &ponto_final.x);
    scanf("%f",&ponto_final.y);
    break;
case 3: 
    printf("Calculo e exibicao da distancia entre os dois pontos:\n");
    float distancia = sqrt(pow(ponto_inicial.x - ponto_final.x,2) + pow(ponto_inicial.y - ponto_final.y, 2));
    printf("Aqui esta a distancia entre eles: %.2f\n", distancia);
    break;
case 4: 
    printf("Encerrando programa...");
    break;
}
printf("\n");
}while(opcao != 4);

return 0;
}