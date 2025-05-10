#include <stdio.h>

int main(){

int num, mult, cubo; 

printf("Digite um numero: \n"); 
scanf("%d", &num);

mult= num*num;
cubo=  num*num*num;
if( num % 2 == 0){
printf("O quadrado desse numero e: %d", mult);
}
else {
    printf("O cubo desse numero e: %d", cubo);
}
return 0;
}