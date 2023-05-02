#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int validaQuantidade () {

    int numeroPecasFuncao;

    do {

        printf("Insira quantas peças o funcionário produziu. \n(Lembrando que o programa será encerrado caso seja digitado o valor -1.)\n");
        scanf("%i", &numeroPecasFuncao);

        if (numeroPecasFuncao < 0 && numeroPecasFuncao != -1) {
            printf("Valor invalido, insira novamente o número de peças do funcionário.\n");
        } else {
            return numeroPecasFuncao;
        }
    } while (numeroPecasFuncao != -1);
}

float calculaSalario (int numeroPecasFuncao, float salarioBaseFuncao) {

    float salarioTotalFuncao;

    if (numeroPecasFuncao <= 50) {
        salarioTotalFuncao = salarioBaseFuncao;
    } else if (numeroPecasFuncao > 80) {

    salarioTotalFuncao = salarioBaseFuncao + (30 * 0.50) + (numeroPecasFuncao - 80) * 0.75;

    } else if ((numeroPecasFuncao > 50) && (numeroPecasFuncao <= 80)) {

        salarioTotalFuncao = salarioBaseFuncao + ((numeroPecasFuncao - 50) * 0.50);
    }
    return salarioTotalFuncao;
    }

int main () {

    setlocale(LC_ALL, "");

    int numeroPecas = 0;
    float salarioBase = 600, salarioTotal;

    do {

        numeroPecas = validaQuantidade ();

        if (numeroPecas == -1) {

            printf("Programa encerrado.");
    
        } else {

        salarioTotal = calculaSalario(numeroPecas, salarioBase);

        printf("Salário total do funcionário é: R$%.2f\n", salarioTotal);

        }

    } while (numeroPecas != -1);

    return 0;
}
