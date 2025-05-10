#include <stdio.h>

int main(void){

int fatorial(int n);
int num, resultado;

printf("Digite um numero inteiro: ");
scanf("%d", &num);

resultado= fatorial(num);

printf("O fatorial de %d eh: %d",num, resultado);

return 0;
}

int fatorial (int n){

    if(n==0 || n==1){
        return 1;
    }else{
        return n*fatorial(n-1);
    }
}