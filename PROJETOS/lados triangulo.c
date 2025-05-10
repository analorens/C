#include <stdio.h>

int main (){

float A, B, C;

printf("Digite o primerio numero: \n"); 
scanf("%f", &A); 

printf("Digite o segundo numero: \n");
scanf("%f", &B); 

printf("Digite o terceiro numero: \n");
scanf("%f", &C);

if( (A+B>C) &&(B+C>A) &&(C+A>B)){ // O || exige que apenas 1 das condições sejam verdadeiras, enquanto o && exige que todas sejam verdadeiras//

    printf("Pode ser os lados de um triangulo!");
}
else{
    printf("Nao pode ser os lados de um triangulo!");
}
return 0;
}