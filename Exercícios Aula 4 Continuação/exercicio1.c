#include <stdio.h>
#include <locale.h>

int imprimirOpcoes() {

    int opcao;

    printf("Opções de pagamento:\n");

    printf("1) À vista com 10%% de desconto\n");

    printf("2) Em duas vezes (preço da etiqueta)\n");

    printf("3) De 3 até 10 vezes com 3%% de juros ao mês (somente para compras acima de R$ 100,00)\n");

    printf("Escolha uma opção: ");

    scanf("%d", &opcao);

    return opcao;
}

void opcaoAVista(float total) {

    float valorComDesconto = total * 0.9;

    printf("Valor total com desconto: R$ %.2f\n", valorComDesconto);
}

void opcaoDuasVezes(float total) {

    printf("Valor total das prestações: R$ %.2f\n", total / 2);
}

void opcaoParcelado(float total, int parcelas) {

    float valorComJuros = total * 1.03;

    float valorPrestacao = valorComJuros / parcelas;

    printf("Valor total das prestações: R$ %.2f\n", valorPrestacao);
}

int main () {

    setlocale(LC_ALL, "");

    float total;

    printf("Digite o valor total gasto pelo cliente: ");
    scanf("%f", &total);

    int opcao = imprimirOpcoes(), parcelas;

    switch (opcao) {
        case 1:
            opcaoAVista(total);
            break;
        case 2:
            opcaoDuasVezes(total);
            break;
        case 3:
            if (total > 100) {
                printf("Digite o número de parcelas (3 a 10): ");
                scanf("%d", &parcelas);
                opcaoParcelado(total, parcelas);
            } else {
                printf("Opção inválida para compras abaixo de R$ 100,00.\n");
            }
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}
