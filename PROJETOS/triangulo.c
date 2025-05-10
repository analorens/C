#include <stdio.h>

int main(){

    int num,j;

printf("Digite um numero: ");
scanf("%d", &num); // lê o numero

for(j=1;j<=num; j++){ // define a quantidade de linhas 

    for(int i=1;i<=j;i++){ //define a quantidade de estrelas por linhas
        printf("*"); //exibe os astericos
    }
    printf(" \n"); //passa para a próxima linha
}
return 0;


}