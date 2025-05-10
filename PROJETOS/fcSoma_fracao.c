#include <stdio.h>

float soma(int n){

 float soma=0;
 int denominador=1;

 for(int i=1; i < n;i++){
    denominador++;
    soma+= 1.0 / denominador;
 }
    soma= 1+ soma;

return soma;

}

int main(void){

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("O valor da soma eh: %.4f", soma(num));

return 0; 
}