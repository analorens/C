#include <stdio.h>

int main(void){

float atualizaNota(float *nota);

float valor;

printf("Digite o valor da nota: ");
scanf("%f", &valor);

atualizaNota(&valor);

return 0;
}

float atualizaNota(float *nota){

float bonus=0.5;
 float soma=0;

if(*nota+bonus >10){

    printf("A nota maxima foi atingida: 10");
} else{
   soma= *nota+bonus;
  return printf("A nota atualizada eh: %.2f", soma);

}
}