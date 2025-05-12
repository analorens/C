#include <stdio.h>
#define MAX 200000

int main (){

int k;
int fib[MAX], a=1, b=1, temp;
int cont = 0;


scanf("%d", &k); // ler a posicao de n desejada.

while (b < MAX) {
    fib[b] = 1;
    temp = b; 
    b = a + b; 
    a = temp; 
}

for (int i =1; i < MAX; i++){
    if (fib[i] == 0){
        cont++;
    }
    if (cont == k){
        printf("%d", i);
        break;
    }
}   
return 0;
}