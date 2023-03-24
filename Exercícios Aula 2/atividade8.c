// Criar um algoritmo que informe a quantidade total de calorias de uma refeição a partir do usuário que deverá informar o prato, a sobremesa e a bebida (veja a tabela a seguir). 

// Enumere cada opção de prato, sobremesa e bebida.

// Prato: 1 - vegetariano, 2 – Peixe, 3 – Frango, 4 – Carne;

// Sobremesa: 1 – Abacaxi, 2 – Sorvete diet, 3 – Mouse diet, 4 – Mouse chocolate;

// Bebida: 1 – Chá, 2 - Suco de laranja, 3 – Suco de melão, 4 – Refrigerante diet. 



#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	int prato, sobremesa, bebida, caloria;
	
	setlocale(LC_ALL, "");
	
    printf("---------PRATOS---------\n");

	printf("Vegetariano ----------- 180 cal (Opção 1)\n");
	printf("Peixe ----------------- 230 cal (Opção 2)\n");
	printf("Frango ---------------- 250 cal (Opção 3)\n");
	printf("Carne ----------------- 350 cal (Opção 4)\n");
	
	printf("Insira o número que corresponde ao prato desejado: ");
	scanf("%d", &prato);
	

    printf("---------SOBREMESAS---------\n");

	
	printf("Abacaxi ---------------------- 75 cal (Opção 1)\n");
	printf("Sorvete Diet ---------------- 110 cal (Opção 2)\n");
	printf("Mouse Diet ------------------ 170 cal (Opção 3)\n");
	printf("Mouse Chocolate ------------- 200 cal (Opção 4)\n");
	
	printf("Insira o número que corresponde a sobremesa desejada: ");
	scanf("%d", &sobremesa);
	

    printf("---------BEBIDAS---------\n");

	
	printf("Chá -------------------------- 20 cal (Opção 1)\n");
	printf("Suco Laranja ----------------- 70 cal (Opção 2)\n");
	printf("Suco Melão ------------------ 100 cal (Opção 3)\n");
	printf("Refrigerante Diete ----------- 65 cal (Opção 4)\n");
	
	printf("Insira o número que corresponde a bebida desejada: ");
	scanf("%d", &bebida);
	
	
	switch (prato) {
		case 1:
			printf("Você escolheu o prato Vegetariano.\n");
			caloria = 180;
			break;
		case 2:
			printf("Você escolheu o prato Peixe.\n");
			caloria = 230;
			break;
		case 3:
			printf("Você escolheu o prato Frango.\n");
			caloria = 250;
			break;
		case 4:
			printf("Você escolheu o prato Carne.\n");
			caloria = 350;
			break;
	}
		switch (sobremesa) {
		case 1:
			printf("Você escolheu a sobremesa Abacaxi.\n");
			caloria = caloria + 75;
			break;
		case 2:
			printf("Você escolheu a sobremesa Sorvete Diet.\n");
			caloria = caloria + 110;
			break;
		case 3:
			printf("Você escolheu a sobremesa Mouse Diet.\n");
			caloria = caloria + 170;
			break;
		case 4:
			printf("Você escolheu a sobremesa Mouse Chocolate.\n");
			caloria = caloria + 200;
			break;
	}
		switch (bebida) {
		case 1:
			printf("Você escolheu a bebida Chá.\n");
			caloria = caloria + 20;
			break;
		case 2:
			printf("Você escolheu a bebida Suco Laranja.\n");
			caloria = caloria + 70;
			break;
		case 3:
			printf("Você escolheu a bebida Suco Melão.\n");
			caloria = caloria + 100;
			break;
		case 4:
			printf("Você escolheu a bebida Refrigerante Diet.\n");
			caloria = caloria + 65;
			break;
	}
	
	printf("A quantidade total de calorias da sua refeição foi: %d cal", caloria);

}