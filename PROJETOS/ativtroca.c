#include <stdio.h>

int main(){

void troca(int *a, int *b);
 
int num1, num2;

printf("Digite os numeros que serao trocados: ");
scanf("%d %d", &num1, &num2);

troca(&num1,&num2);

return 0;

}

void troca(int *a,int *b){

    int aux=*a;
    *a=*b;
    *b=aux;

    printf(" %d, %d", *a,*b);

    return;
}