#include <stdio.h>

void troca(int *a, int *b){

    int aux; 

    aux=*a;
    *a=*b;
    *b=aux;

return;
}

int main(void){

int num1, num2;

printf("Digite o primeiro numero: ");
scanf("%d", &num1);
printf("Digite o segundo numero: ");
scanf("%d", &num2);

troca(&num1, &num2);

printf("Troca concluida: %d %d",num1, num2);

return 0;
}