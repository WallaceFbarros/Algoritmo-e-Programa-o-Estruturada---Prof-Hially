#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struct que armazena os dados de veiculos

typedef struct {
    char proprietario[50];
    char combustivel[10];
    char modelo[50];
    char cor[20];
    char numChassi[50];
    int ano;
    char placa[8];
} Veiculo;

// Struct para encadear as listas de veiculos

typedef struct No {
    Veiculo veiculo;
    struct No* proximo;
} NoVeiculo;

// Função que adiciona o veiculo a struct No

void adicionarVeiculo(NoVeiculo** lista, Veiculo veiculo) {
    NoVeiculo* novoNo = (NoVeiculo*)malloc(sizeof(NoVeiculo));
    novoNo->veiculo = veiculo;
    novoNo->proximo = *lista;
    *lista = novoNo;
}

// Função para listar proprietários de veículos do ano de 2010 ou posterio e que sejam movidos a diesel

void listarProprietariosDiesel(NoVeiculo* lista) {
    printf("Proprietários de veículos do ano 2010 ou posterior e que sejam movidos a diesel:\n");
    while (lista != NULL) {
        if (strcmp(lista->veiculo.combustivel, "diesel") == 0 && lista->veiculo.ano >= 2010) {
            printf("- %s\n", lista->veiculo.proprietario);
        }
        lista = lista->proximo;
    }
    printf("\n");
}

// Função para listar placas que começam com 'J' e terminam com 0, 2, 4 ou 7, com seus respectivos proprietários

void listarPlacasJ(NoVeiculo* lista) {
    printf("Placas que começam com 'J' e terminam com 0, 2, 4 ou 7 e seus respectivos proprietários:\n");
    while (lista != NULL) {
        if (lista->veiculo.placa[0] == 'J' && (lista->veiculo.placa[6] == '0' || lista->veiculo.placa[6] == '2' ||
                                              lista->veiculo.placa[6] == '4' || lista->veiculo.placa[6] == '7')) {
            printf("- Placa: %s | Proprietário: %s\n", lista->veiculo.placa, lista->veiculo.proprietario);
        }
        lista = lista->proximo;
    }
    printf("\n");
}

// Função auxiliar para verificar se um caractere é uma vogal

int isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

// Função para listar modelo e cor dos veículos com placas cuja segunda letra é uma vogal e a soma dos valores numéricos é par

void listarModeloCorPlacasVogalSomaPar(NoVeiculo* lista) {
    printf("Modelo e cor dos veículos com placas cuja segunda letra é uma vogal e a soma dos valores numéricos é par:\n");
    while (lista != NULL) {
        if (isVowel(lista->veiculo.placa[1])) {
            int somaNumeros = atoi(lista->veiculo.placa + 3) + atoi(lista->veiculo.placa + 4) +
                              atoi(lista->veiculo.placa + 5) + atoi(lista->veiculo.placa + 6);
            if (somaNumeros % 2 == 0) {
                printf("- Modelo: %s | Cor: %s\n", lista->veiculo.modelo, lista->veiculo.cor);
            }
        }
        lista = lista->proximo;
    }
    printf("\n");
}

// Função para trocar o proprietário de um veículo com base no número do chassi

void trocarProprietario(NoVeiculo* lista, char numChassi[50], char novoProprietario[50]) {
    while (lista != NULL) {
        if (strcmp(lista->veiculo.numChassi, numChassi) == 0) {
            if (strchr(lista->veiculo.placa, '0') == NULL) {
                strcpy(lista->veiculo.proprietario, novoProprietario);
                printf("Proprietário do veículo com chassi %s atualizado para %s\n", numChassi, novoProprietario);
            } else {
                printf("Não é possível trocar o proprietário do veículo com chassi %s, pois a placa possui dígitos iguais a zero.\n", numChassi);
            }
            return;
        }
        lista = lista->proximo;
    }
    printf("Veículo com chassi %s não encontrado.\n", numChassi);
}

// Função para exibir o menu de opções

void exibirMenu() {
    printf("\n===== MENU =====\n");
    printf("1. Listar proprietários de veículos a diesel do ano de 2010 ou posterior\n");
    printf("2. Listar placas que começam com 'J' e terminam com 0, 2, 4 ou 7\n");
    printf("3. Listar modelo e cor de veículos com placas cuja segunda letra é uma vogal e a soma dos valores numéricos é par\n");
    printf("4. Trocar proprietário de um veículo\n");
    printf("5. Sair\n");
    printf("Escolha uma opção: ");
}

int main() {
    NoVeiculo* listaVeiculos = NULL;
    int opcao;

    // Exemplo de preenchimento da lista com alguns veículos
    Veiculo veiculo1 = {"Wallace", "diesel", "Modelo1", "Cor1", "1", 2010, "JAB1234"};
    Veiculo veiculo2 = {"Felipe", "gasolina", "Modelo2", "Cor2", "2", 2012, "JAC5678"};
    Veiculo veiculo3 = {"Roberto", "diesel", "Modelo3", "Cor3", "3", 2015, "JBC9876"};
    Veiculo veiculo4 = {"João", "alcool", "Modelo4", "Cor4", "4", 2018, "JAD5432"};
    Veiculo veiculo5 = {"Alexandre", "diesel", "Modelo5", "Cor5", "5", 2011, "JAE1092"};

    adicionarVeiculo(&listaVeiculos, veiculo1);
    adicionarVeiculo(&listaVeiculos, veiculo2);
    adicionarVeiculo(&listaVeiculos, veiculo3);
    adicionarVeiculo(&listaVeiculos, veiculo4);
    adicionarVeiculo(&listaVeiculos, veiculo5);

    do {
        exibirMenu();
        scanf("%d", &opcao);
        getchar(); // Limpar o buffer do teclado

        switch (opcao) {
            case 1:
                listarProprietariosDiesel(listaVeiculos);
                break;
            case 2:
                listarPlacasJ(listaVeiculos);
                break;
            case 3:
                listarModeloCorPlacasVogalSomaPar(listaVeiculos);
                break;
            case 4: {
                char numChassi[50];
                char novoProprietario[50];
                printf("Digite o número do chassi: ");
                fgets(numChassi, sizeof(numChassi), stdin);
                numChassi[strcspn(numChassi, "\n")] = '\0'; // Remover o caractere de nova linha
                printf("Digite o novo proprietário: ");
                fgets(novoProprietario, sizeof(novoProprietario), stdin);
                novoProprietario[strcspn(novoProprietario, "\n")] = '\0'; // Remover o caractere de nova linha
                trocarProprietario(listaVeiculos, numChassi, novoProprietario);
                break;
            }
            case 5:
                printf("\nObrigado por utilizar o aplicativo, ele será encerrado em instantes...\n");
                break;
            default:
                printf("Opção inválida! Digite um número entre 1 e 5.\n");
                break;
        }

    } while (opcao != 5);

    // Liberar memória alocada para a lista de veículos
    NoVeiculo* noAtual = listaVeiculos;
    while (noAtual != NULL) {
        NoVeiculo* proximoNo = noAtual->proximo;
        free(noAtual);
        noAtual = proximoNo;
    }

    return 0;
}