#include <stdio.h>

int main(){

float num;

printf("Digite um numero:");
scanf("%f", &num);

if(num > 0){

    printf("Maior que 0");
}
 if(num <0){
    printf("Menor que 0");
 }
 
if (num ==0){
   printf("Igual a zero");
}

return 0;
}