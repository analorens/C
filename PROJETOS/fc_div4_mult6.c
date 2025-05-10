#include <stdio.h>

int main(void){

int num, contador=0;

printf("Digite um numero: ");

do{

    scanf("%d", &num);

    if(num %4 ==0 && num % 6==0 ){
        contador++;
    }

}while (num!=-1);

    printf("A quantidade correspondente eh: %d",contador);

return 0;
}