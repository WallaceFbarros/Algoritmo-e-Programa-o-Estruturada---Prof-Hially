#include <stdio.h>
#include <locale.h>

void imprimirLinhaSeparadora() {
    printf("+--------------+-------------+-------------------+\n");
}

void imprimirTabela(int tabela[][3]) {

    for (int i = 0; i < 128; i++) {
        printf("|%d|\t\t|%X|\t\t|%c|\n", tabela[i][0], tabela[i][1], tabela[i][2]);
        imprimirLinhaSeparadora();
    }
}

int main() {

    setlocale(LC_ALL, "");

    int tabela[128][3];

    // Preenche a tabela com as informações da tabela ASCII
    for (int i = 0; i < 128; i++) {
        tabela[i][0] = i; // 1. Código decimal
        tabela[i][1] = i; // 2. Código hexadecimal
        tabela[i][2] = i; // 3. Caractere correspondente
    }

    // Imprimir a tabela com a separação em linhas
    printf("Código Decimal\tCódigo Hexa\tCaractere\n");
    imprimirLinhaSeparadora();

    imprimirTabela(tabela);

    return 0;

}