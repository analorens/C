#include <stdio.h>

int main(void){

void menorMaior(int a,int b, int *maior, int *menor);

int maior,menor;
int num1,num2;

printf("Digite um numero: ");
scanf("%d", &num1);
printf("Digite outro numero: ");
scanf("%d", &num2);

menorMaior(num1,num2, &maior, &menor);

printf("Maior:%d. \n Menor:%d.", maior, menor);

return 0;
}

void menorMaior(int a,int b, int *maior, int *menor){  
     if( a>b){
        *maior=a;
        *menor=b;
     }else{
        *maior=b;
        *menor=a;
     }
 }