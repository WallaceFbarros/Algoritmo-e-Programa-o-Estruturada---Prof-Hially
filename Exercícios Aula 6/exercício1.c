#include <stdio.h>
#include <locale.h>

struct Pessoa {
    char nome[50];
    int idade;
    char endereco[100];
};

int main() {

    setlocale(LC_ALL, "");
    struct Pessoa pessoa;

    printf("Digite o nome: ");
    fgets(pessoa.nome, 50, stdin);

    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);

    printf("Digite o endereço: ");
    getchar();
    fgets(pessoa.endereco, 100, stdin);

    printf("\nDados cadastrados:\n");
    printf("Nome: %s", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Endereço: %s", pessoa.endereco);

    return 0;
}
