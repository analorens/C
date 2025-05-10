#include <stdio.h>

int ehfibonacci(int n){

int anterior=1, atual=1,proximo;

    if(n==1){
    return 1;
    }
    while(n>atual){
        proximo=anterior+atual;
        anterior=atual;
        atual=proximo;
    }
    if(n==atual){
        return 1;
    }
    else{
        return 0;
    }

}

int main(void){

    int num, verificador;

    printf("Digite um numero: "); 
    scanf("%d", &num);

verificador=ehfibonacci(num);

    if(verificador==1){
        printf("Esse numero pertence a sequencia de Fibonacci!");
    }
    else{
        printf("Esse numero nao pertence a sequencia de Fibonacci!");
    }


return 0;
}