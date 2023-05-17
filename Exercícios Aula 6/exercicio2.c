#include <stdio.h>
#include <locale.h>

struct Aluno {
    char nome[50];
    int matricula;
    char curso[50];
};

int main() {

    setlocale(LC_ALL, "");

    struct Aluno alunos[5];

    printf("Digite os dados dos alunos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: ");
        fgets(alunos[i].nome, 50, stdin);

        printf("Matrícula (Digite apenas números): ");
        scanf("%d", &alunos[i].matricula);
        getchar();

        printf("Curso: ");
        fgets(alunos[i].curso, 50, stdin);

    }

    printf("\nDados dos alunos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %sMatrícula: %d\nCurso: %s\n", alunos[i].nome, alunos[i].matricula, alunos[i].curso);
    }

    return 0;
}

