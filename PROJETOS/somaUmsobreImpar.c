#include <stdio.h> 

double umSobreImpar (int n){

    int denominador=3;

    for(int i=0; i<n;i++){ 
    denominador+=2;
}
return 1/ (float) denominador;
}

double somaUmSobreImpar(int n){

   float soma=0;
   
    for(int i=0; i<n;i++){ 
        soma+= umSobreImpar(i);
}
return soma;
}

int main(){

int num;

printf("Digite um valor: ");
scanf("%d", &num); 

printf("O valor da soma corresponde  %.2lf", somaUmSobreImpar(num));


return 0;
}
