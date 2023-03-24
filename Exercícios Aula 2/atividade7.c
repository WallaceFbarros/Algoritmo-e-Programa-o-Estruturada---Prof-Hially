// O cardápio de uma lanchonete é o seguinte: 

// Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor a ser pago por aquele lanche. 
// Considere que a cada execução somente será calculado um item. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

	int codigo, quantidade;
    float valorTotal;
	
	setlocale(LC_ALL, "");
	
    printf("---------CARDÁPIO---------\n");

	printf("100 - Cachorro quente - R$ 10,10\n101 - Bauru simples - R$8,30\n102 - Bauru c/ovo - R$ 8,50\n103 - Hamburger - R$12,50\n104 - Cheeseburger - 13,25\n");
	
	printf("Insira o código da refeição que será escolhida: ");
    scanf("%i", &codigo);

    printf("Insira a quantidade: ");
    scanf("%i", &quantidade);

		switch (codigo) {
		case 100:
			printf("Você escolheu Cachorro quente.\n");
			valorTotal = quantidade * 10.10;
            printf("O valor total da refeição deu R$%.2f", valorTotal);
			break;
		case 101:
			printf("Você escolheu Bauru simples.\n");
			valorTotal = quantidade * 8.30;
            printf("O valor total da refeição deu R$%.2f", valorTotal);
			break;
		case 102:
			printf("Você escolheu Bauru c/ovo.\n");
			valorTotal = quantidade * 8.50;
            printf("O valor total da refeição deu R$%.2f", valorTotal);
			break;
		case 103:
			printf("Você escolheu Hamburger.\n");
			valorTotal = quantidade * 12.50;
            printf("O valor total da refeição deu R$%.2f", valorTotal);
			break;
        case 104:
			printf("Você escolheu Cheeseburger.\n");
			valorTotal = quantidade * 13.25;
            printf("O valor total da refeição deu R$%.2f", valorTotal);
			break;
        default:
            printf("Código digitado não é reconhecido.");
            break;
	}
}