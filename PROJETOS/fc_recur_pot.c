#include <stdio.h>

int potencia(int base, int expoente){

    if(expoente==0){

    return 1; 

    } else{ 
return base * potencia(base, expoente - 1); 
    }
}

int main(void){

int base, expoente;

printf("Digite o valor da base: ");
scanf("%d", &base);
printf("Digite o valor do expoente: ");
scanf("%d", &expoente);

printf("%d", potencia(base, expoente));

return 0;
}