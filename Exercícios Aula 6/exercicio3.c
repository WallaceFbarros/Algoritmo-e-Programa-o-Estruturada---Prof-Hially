#include <stdio.h>
#include <locale.h>

#define NUM_ALUNOS 2
#define NOTA_APROVACAO 7.0

struct Aluno {
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
    float media;
};

void imprimirDadosAluno(struct Aluno aluno) {
    printf("Matrícula: %d\n", aluno.matricula);
    printf("Nome: %s", aluno.nome);
    printf("Nota 1: %.1f\n", aluno.nota1);
    printf("Nota 2: %.1f\n", aluno.nota2);
    printf("Nota 3: %.1f\n", aluno.nota3);
    printf("Média: %.1f\n", aluno.media);
    printf("\n");
}

struct Aluno encontrarMaiorNota1(struct Aluno alunos[]) {
    struct Aluno maiorNota1 = alunos[0];

    for (int i = 1; i < NUM_ALUNOS; i++) {
        if (alunos[i].nota1 > maiorNota1.nota1) {
            maiorNota1 = alunos[i];
        }
    }

    return maiorNota1;
}

struct Aluno encontrarMaiorMedia(struct Aluno alunos[]) {
    struct Aluno maiorMedia = alunos[0];

    for (int i = 1; i < NUM_ALUNOS; i++) {
        if (alunos[i].media > maiorMedia.media) {
            maiorMedia = alunos[i];
        }
    }

    return maiorMedia;
}

struct Aluno encontrarMenorMedia(struct Aluno alunos[]) {
    struct Aluno menorMedia = alunos[0];

    for (int i = 1; i < NUM_ALUNOS; i++) {
        if (alunos[i].media < menorMedia.media) {
            menorMedia = alunos[i];
        }
    }

    return menorMedia;
}

void verificarAprovacao(struct Aluno aluno) {
    if (aluno.media >= NOTA_APROVACAO) {
        printf("Aprovado.\n");
    } else {
        printf("Reprovado.\n");
    }
    printf("\n");
}

int main() {

    setlocale(LC_ALL, "");

    struct Aluno alunos[NUM_ALUNOS];

    printf("=== Entrada de dados dos alunos ===\n");
    
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno %d:\n", i + 1);

        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        getchar(); // Limpa o buffer do teclado

        printf("Nome: ");
        fgets(alunos[i].nome, 50, stdin);

        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);

        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);

        printf("Nota 3: ");
        scanf("%f", &alunos[i].nota3);

        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
        printf("\n");
    }

    printf("=== Dados dos alunos ===\n");

    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno %d:\n", i + 1);
        imprimirDadosAluno(alunos[i]);
    }

    printf("=== Estatísticas da Turma ===");

    struct Aluno alunoMaiorNota1 = encontrarMaiorNota1(alunos);
    printf("Aluno com maior nota na primeira prova:\n");
    imprimirDadosAluno(alunoMaiorNota1);


    struct Aluno alunoMaiorMedia = encontrarMaiorMedia(alunos);
    printf("\nAluno com maior média geral:\n");
    imprimirDadosAluno(alunoMaiorMedia);

    struct Aluno alunoMenorMedia = encontrarMenorMedia(alunos);
    printf("Aluno com menor média geral:\n");
    imprimirDadosAluno(alunoMenorMedia);

    printf("=== Verificação de aprovação ===\n");

    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno %s:\n", alunos[i].nome);
        verificarAprovacao(alunos[i]);
    }

return 0;

}