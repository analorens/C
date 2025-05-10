#include <stdio.h>

void ehpar(int n, int *contador){

    if(n %2==0 && n!=0){
        (*contador)++;
    }
    return; 
}

int main(void){ 

int num, pares = 0;

printf("Digite numeros inteiros: ");

do{
    scanf("%d", &num);
    
    if (num != 0) {
        ehpar(num, &pares);
    }

}while (num !=0);
printf("Total de numeros pares: %d\n", pares);

return 0;
}

