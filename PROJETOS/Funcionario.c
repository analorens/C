#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    char nome[51];
    int idade;
    char sexo;
    char cpf[15];
    Data nascimento;
    int codSetor;
    char cargo[31];
    float salario;
} Funcionario;

int main(void) {
    Funcionario funcionario;

    printf("Digite o nome: ");
    scanf(" %[^\n]", funcionario.nome);

    printf("Digite a idade: ");
    scanf("%d", &funcionario.idade);

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &funcionario.sexo);

    printf("Digite o CPF: ");
    scanf(" %[^\n]", funcionario.cpf);

    printf("Digite a data de nascimento (dia mes ano): ");
    scanf("%d %d %d", &funcionario.nascimento.dia, &funcionario.nascimento.mes, &funcionario.nascimento.ano);

    printf("Digite o codigo do setor (0 a 99): ");
    scanf("%d", &funcionario.codSetor);

    printf("Digite o cargo: ");
    scanf(" %[^\n]", funcionario.cargo);

    printf("Digite o salario: ");
    scanf("%f", &funcionario.salario);

    printf("Dados do Funcionario: \n");
    printf("Nome: %s\n", funcionario.nome);
    printf("Idade: %d\n", funcionario.idade);
    printf("Sexo: %c\n", funcionario.sexo);
    printf("CPF: %s\n", funcionario.cpf);
    printf("Data de Nascimento: %02d/%02d/%04d\n", funcionario.nascimento.dia, funcionario.nascimento.mes, funcionario.nascimento.ano);
    printf("Codigo do Setor: %d\n", funcionario.codSetor);
    printf("Cargo: %s\n", funcionario.cargo);
    printf("Salario: R$ %.2f\n", funcionario.salario);

    return 0;
}
