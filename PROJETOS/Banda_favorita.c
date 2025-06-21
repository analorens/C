#include <stdio.h>
#include <string.h>


typedef struct{

    char nome[51];
    char estiloMusical[31];
    int numeroIntegrantes;
    int posicaoranking;

}Banda;

void buscaBanda(Banda *conjunto, int tam) {
    char bandaBuscada[51];
    int encontrada = 0;

    printf("\nDigite o nome da banda que deseja buscar: ");
    scanf(" %[^\n]", bandaBuscada);

    for(int i = 0; i < tam; i++) {
        if(strcmp(conjunto[i].nome, bandaBuscada) == 0) {
            encontrada =1;
            break;
        }
    }
    if(encontrada) {
        printf("Esta entre as bandas favoritas!\n");
    } else {
        printf("Nao esta entre as bandas favoritas!\n");
    }
}

int main(void){

    Banda conjunto[5];

    for(int i = 0; i < 5; i++){
        printf("Digite o nome da banda %d: ", i + 1);
        scanf("%[^\n]", conjunto[i].nome);
        getchar();
    }

    for(int i = 0; i < 5; i++){
        printf("Digite o estilo musical da banda %d: ", i +1);
        scanf("%[^\n]", conjunto[i].estiloMusical);
        getchar();
    }

    for(int i =0; i < 5; i++){
        printf("Digite o numero de integrantes da banda %d: ", i + 1);
        scanf("%d", &conjunto[i].numeroIntegrantes);
    }

    for(int i = 0 ; i < 5; i++){
        printf("Em que lugar a banda %d esta? ", i + 1);
        scanf("%d", &conjunto[i].posicaoranking);
    }

    printf("Informacoes das bandas cadastradas:\n");

       for(int i = 0; i < 5; i++){
        printf("\n");
        printf("Nome da banda: %s.\nEstilo musical: %s.\nNumero de integrantes: %d.\nPosicao no ranking: %d.\n", conjunto[i].nome, conjunto[i].estiloMusical, conjunto[i].numeroIntegrantes, conjunto[i].posicaoranking);
    }
    buscaBanda(conjunto, 5);
return 0;
}