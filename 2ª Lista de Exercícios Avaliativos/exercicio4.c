#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define salarioMinimo 1400

int classificaSalario (float salarioFuncao) {

    if (salarioFuncao > 1400) {
        return 1;
    } else if (salarioFuncao == 1400) {
        return 0;
    } else {
        return -1;
    }
}

void mostraClassifica (int classificacaoSalario) {

    if (classificacaoSalario == 1) {
        printf("e tem um salário acima do salário mínimo brasileiro.\n");
    } else if (classificacaoSalario == 0) {
        printf("e tem um salário igual do salário mínimo brasileiro.\n");
    } else {
        printf("e tem um salário abaixo do salário mínimo brasileiro.\n");
    }
}

int verificarGeneroFunc (char sexo) {
    if (sexo == 'M' || sexo == 'F') {
        return 1;
    } else {
        return 0;
    }
}

int verificarSalarioFunc (float salario) {
    if (salario < 1) {
        return 1;
    } else {
        return 0;
    }
}

int main () {

    setlocale(LC_ALL, "");

    int i, acima = 0, abaixo = 0, classificacaoSalario, verificarGenero, verificarSalario, qtdAssalariados;
    float salario;
    char sexo;

    printf("Insira quantos assalariados vão fazer parte dessa pesquisa: ");
    scanf("%i", &qtdAssalariados);

    for(i = 0; i < qtdAssalariados; i++) {

        do {

            printf("Insira seu gênero M(Masculino) ou F(Feminino): \n");
            scanf(" %c", &sexo);

            verificarGenero = verificarGeneroFunc(sexo);
        
        } while (verificarGenero == 0);

        do {

            printf("Insira o valor de seu salário: ");
            scanf("%f", &salario);

            verificarSalario = verificarSalarioFunc(salario);

        } while (verificarSalario == 1);
        
            classificacaoSalario = classificaSalario(salario);

            if (sexo == 'M') {
                printf("O genêro do assalariado é Masculino, ");
            } else {
                printf("O genêro do assalariado é Feminino, ");
            }

            printf("ele recebe R$%.2f mensais ", salario);
            mostraClassifica(classificacaoSalario);

        if (classificacaoSalario == 1) {
            acima++;
        } else if (classificacaoSalario != 0 && classificacaoSalario != 1) {
            abaixo++;
        }
    }

    printf("A quantidade de assalariados que recebem mensalmente menos que um salário mínimo é: %i\n", abaixo);
    printf("A quantidade de assalariados que recebem mensalmente mais que um salário mínimo é: %i\n", acima);

    return 0;
}
