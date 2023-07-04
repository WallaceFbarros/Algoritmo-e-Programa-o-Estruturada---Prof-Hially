#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struct que vai conter as informações de cada restaurante

typedef struct Restaurante {
  char nome[50];
  char endereco[100];
  float precoMedio;
  char tipoComida[50];
  struct Restaurante *proximo;
} Restaurante;

// Função que pede para você adicionar um restaurante na struct

void solicitaDados(Restaurante *restaurante) {
  printf("Digite o nome do restaurante: ");
  scanf("%s", restaurante->nome);

  printf("Digite o endereço do restaurante: ");
  scanf(" %[^\n]s", restaurante->endereco);

  printf("Digite o preço médio do restaurante: ");
  scanf("%f", &(restaurante->precoMedio));

  printf("Digite o tipo de comida do restaurante: ");
  scanf(" %[^\n]s", restaurante->tipoComida);
}

// Função para listar as informações contidas na struct

void listarDadosStruct(Restaurante *lista) {
  if (lista == NULL) {
    printf("A lista está vazia.\n");
    return;
  }

  printf("\n===== Lista de Restaurantes =====\n");
  Restaurante *atual = lista;
  while (atual != NULL) {
    printf("Nome: %s\n", atual->nome);
    printf("Endereço: %s\n", atual->endereco);
    printf("Preço médio: %.2f\n", atual->precoMedio);
    printf("Tipo de comida: %s\n", atual->tipoComida);
    printf("-----------------------------\n");
    atual = atual->proximo;
  }
}

int main() {
  Restaurante *lista = NULL; // Inicializa a lista vazia
  int opcao;

  do {
    printf("\n");
    printf("===== MENU =====\n");
    printf("1. Adicionar restaurante\n");
    printf("2. Listar restaurantes\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1: {
      Restaurante *novoRestaurante = (Restaurante *)malloc(sizeof(Restaurante));
      solicitaDados(novoRestaurante);
      novoRestaurante->proximo = lista;
      lista = novoRestaurante;
      printf("O restaurante foi adicionado com sucesso!\n");
      break;
    }
    case 2:
      listarDadosStruct(lista);
      break;
    case 3:
      printf("\nObrigado por utilizar o aplicativo, ele será encerrado em "
             "instantes...\n");
      break;
    default:
      printf("Opção inválida!\n");
      break;
    }
  } while (opcao != 3);

  // Libera a memória alocada pela lista
  Restaurante *atual = lista;
  while (atual != NULL) {
    Restaurante *proximo = atual->proximo;
    free(atual);
    atual = proximo;
  }

  return 0;
}