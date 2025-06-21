#include <stdio.h>
#include <string.h>

typedef struct{

    char nome[101]; // 1 para o \0
    char autor[50];
    int anoPublicacao;
}Livro;

int main(void){

Livro dados;

printf("Digite o nome do livro: ");
scanf(" %[^\n]", dados.nome);

fflush(stdin);

printf("Digite o autor: ");
scanf(" %[^\n]", dados.autor);

printf("Digite o ano de publicacao: ");
scanf("%d", &dados.anoPublicacao);

printf("\nNome do livro: %s.\n", dados.nome);
printf("Autor do livro: %s.\n", dados.autor );
printf("Ano de publicacao: %d.\n", dados.anoPublicacao);

return 0;
}
