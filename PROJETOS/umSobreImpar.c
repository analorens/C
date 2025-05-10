#include <stdio.h>

double umSobreImpar (int n){

    int denominador=3;

    for(int i=1; i<n;i++){ 
    denominador+=2;
}
return denominador;
}


int main(void){

int num;

printf("Digite um numero");
scanf("%d", &num);

double resultado=umSobreImpar(num);

printf("1/%.2lf", resultado);

return 0;
}