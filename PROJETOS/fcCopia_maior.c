#include <stdio.h>

int maior(int a, int b){

int maior=0;

if(a>b){
    maior=a;
}else{
    maior=b;
}
return maior;
}

int main(void){

    int num1,num2;

    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);

    printf("O maior eh: %d", maior(num1,num2));

return 0;
}