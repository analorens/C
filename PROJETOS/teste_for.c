//Faça um programa que leia 2num int e mult sem usar o operador mult(*).Mostrar o resultado//

#include <stdio.h>

int main(){

    int A,B,soma=0;

    printf("Digite o primeiro numero: ");  
    // pede para o usuário digitar dois números inteiros:  
    //A (o número que será repetido) e B (o número de vezes que A será somado).
    scanf("%d", &A);

    printf("Digite o segundo numero: ");
    scanf("%d", &B);

    for(int i=1; i<=B; i++){
        soma=soma+A;
    }
printf("%d", soma);
return 0;

}