#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef struct{

    int dia;
    int mes;
    int ano;
}Data;


typedef struct{

    char nome[50];
    float altura;
    Data data;
} Pessoa;


void geraData(Data *data){


data ->dia = rand () % 30 + 1;

data ->mes = rand () % 12 + 1;

data ->ano = rand () % 25 + 2000;

}

int main(void){

    Pessoa pessoas[10];

    srand(time(NULL));

    for(int i = 0; i < 10; i++){
        printf("Digite seu nome: ");
        scanf(" %[^\n]", pessoas[i].nome);
    printf("Digite a altura: ");
    scanf("%f", &pessoas[i].altura);
}

for(int i =0; i < 10; i++){
    geraData(&pessoas[i].data);
}

printf("Nomes fornecidos:\n ");
for(int i =0; i < 10; i++){
    printf("%s\n", pessoas[i].nome);
}

printf("Alturas fornecidas:\n ");
for(int i =0; i < 10; i++){
    printf("%.2f\n", pessoas[i].altura);
}

printf("Suas respectivas datas de nascimento:\n ");
for(int i =0; i < 10; i++){
    printf("%02d/%02d/%d. \n", pessoas[i].data.dia, pessoas[i].data.mes, pessoas[i].data.ano);
}

return 0;


}