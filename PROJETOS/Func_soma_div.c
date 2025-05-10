#include <stdio.h>

int somaDivisores(int n){

    int soma=0;
    
    for(int i=1; i<n;i++){
        if( n % i==0 ){
            soma+=i;
        }
    }
    printf("%d", soma);
    return soma;
    }

int main(void){

int num;

printf("Digite um numero para exibir a soma de seus divisores: ");
scanf("%d", &num);

somaDivisores(num);

return 0;
}

