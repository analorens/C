#include <stdio.h>

typedef struct {
    int matricula;
    char nome[51];
    float nota1, nota2, nota3;
} Aluno;

int main(void) {
    Aluno avaliacao[5];
    float medias[5];

    // Ler os dados dos 5 alunos
    for (int i = 0; i < 5; i++) {
        printf("\nDigite os dados do aluno %d:\n", i + 1);
        printf("Matricula: ");
        scanf("%d", &avaliacao[i].matricula);

        printf("Nome: ");
        scanf(" %[^\n]", avaliacao[i].nome);

        printf("Nota 1: ");
        scanf("%f", &avaliacao[i].nota1);

        printf("Nota 2: ");
        scanf("%f", &avaliacao[i].nota2);

        printf("Nota 3: ");
        scanf("%f", &avaliacao[i].nota3);
    }

    // Encontrar e exibir o aluno com a maior nota na primeira prova
    float maiorNota = avaliacao[0].nota1;
    int posMaiorNota = 0;

    for (int i = 1; i < 5; i++) {
        if (avaliacao[i].nota1 > maiorNota) {
            maiorNota = avaliacao[i].nota1;
            posMaiorNota = i;
        }
    }

    printf("\nAluno com maior nota na primeira prova:\n");
    printf("Nome: %s\n", avaliacao[posMaiorNota].nome);
    printf("Matricula: %d\n", avaliacao[posMaiorNota].matricula);
    printf("Nota 1: %.2f\n", maiorNota);

    // Calcular média de cada aluno e exibir o aluno com maior média
    float maiorMedia = 0;
    int posMaiorMedia = 0;

    for (int i = 0; i < 5; i++) {
        medias[i] = (avaliacao[i].nota1 + avaliacao[i].nota2 + avaliacao[i].nota3) / 3.0;
        if (i == 0 || medias[i] > maiorMedia) {
            maiorMedia = medias[i];
            posMaiorMedia = i;
        }
    }

    printf("\nAluno com maior media:\n");
    printf("Nome: %s\n", avaliacao[posMaiorMedia].nome);
    printf("Matricula: %d\n", avaliacao[posMaiorMedia].matricula);
    printf("Media: %.2f\n", maiorMedia);

    // Exibir aluno com menor média
    float menorMedia = medias[0];
    int posMenorMedia = 0;

    for (int i = 1; i < 5; i++) {
        if (medias[i] < menorMedia) {
            menorMedia = medias[i];
            posMenorMedia = i;
        }
    }

    printf("\nAluno com menor media:\n");
    printf("Nome: %s\n", avaliacao[posMenorMedia].nome);
    printf("Matricula: %d\n", avaliacao[posMenorMedia].matricula);
    printf("Media: %.2f\n", menorMedia);

    //  Verificar se está aprovado ou reprovado
    printf("\nSituacao dos alunos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Aluno: %s - Media: %.2f - ", avaliacao[i].nome, medias[i]);
        if (medias[i] >= 6.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }

    return 0;
}
