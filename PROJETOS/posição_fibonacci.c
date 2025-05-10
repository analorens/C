#include <stdio.h>

int main (){

    //Declaração das variaveis.
int n;
int num_anterior=1,num_atual=1, proximo_num;
int cont=3;

printf("Digite a posicao de n: "); 
scanf("%d", &n); // ler a posicao de n desejada.

if ((n==1) || (n==2)){  // condição caso n seja igual a 1 ou 2.
    printf("O termo que representa a %d posicao e o numero:1", n); // As 2 primeiras posições da sequência são o numero 1.
}
else{ 

    while (cont<=n){ // Enquanto o contador for menor ou igual a n 
        //atualiza o proximo numero da sequencia.
        proximo_num=num_atual+num_anterior;
        // atualiza o numero anterior para o numero atual
        num_anterior=num_atual;
        // atualiza o numero atual para o proximo numero
        num_atual= proximo_num;
        cont++; // incrementa o contador
    }
printf("O termo que representa a %d posicao e o numero: %d", n, num_atual); // exibe o valor que ocupa a posição n 
}
return 0;
}