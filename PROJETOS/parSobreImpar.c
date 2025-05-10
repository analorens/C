#include <stdio.h>

int par(int n){

    return 2*n;
}

double umSobreImpar (int n){

    int denominador=3;

    for(int i=1; i<n;i++){ 
    denominador+=2;
}
return denominador;
}


double parSobreImpar(int n){

    int cima= par(n);
    double baixo= umSobreImpar(n);
    return cima * baixo;
}

int main(){

int num;
double resultado;

printf("Digite um numero: ");
scanf("%d", &num);

resultado= parSobreImpar(num);

printf("O valor correspondente eh %.4lf ", resultado);

return 0;

}
