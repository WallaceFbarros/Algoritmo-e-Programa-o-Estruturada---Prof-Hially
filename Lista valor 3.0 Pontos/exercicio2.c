#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struct que vai conter as informações para cada dieta

typedef struct Dieta {
  char nomeComida[50];
  float pesoPorcao;
  int numCalorias;
  struct Dieta *proximo;
} Dieta;

// Função que pede para o usuário adicionar uma dieta a struct

void solicitaDadosStruct(Dieta *dieta) {
  printf("Digite o nome da comida: ");
  scanf("%s", dieta->nomeComida);

  printf("Digite o peso da porção (em gramas): ");
  scanf("%f", &(dieta->pesoPorcao));

  printf("Digite o número de calorias: ");
  scanf("%d", &(dieta->numCalorias));
}

// Função para listar todas as dietas que estão na struct

void listaDadosStruct(Dieta *lista) {
  if (lista == NULL) {
    printf("A lista está vazia.\n");
    return;
  }

  printf("\n===== Lista de Dietas =====\n");
  Dieta *atual = lista;
  while (atual != NULL) {
    printf("Nome da comida: %s\n", atual->nomeComida);
    printf("Peso da porção: %.2f gramas\n", atual->pesoPorcao);
    printf("Número de calorias: %d\n", atual->numCalorias);
    printf("-----------------------------\n");
    atual = atual->proximo;
  }
}

int main() {
  Dieta *lista = NULL; // Inicializa a lista vazia
  int opcao;

  do {
    printf("\n");
    printf("===== MENU =====\n");
    printf("1. Adicionar dieta\n");
    printf("2. Listar dietas\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1: {
      Dieta *novaDieta = (Dieta *)malloc(sizeof(Dieta));
      solicitaDadosStruct(novaDieta);
      novaDieta->proximo = lista;
      lista = novaDieta;
      printf("Dieta adicionada com sucesso!\n");
      break;
    }
    case 2:
      listaDadosStruct(lista);
      break;
    case 3:
      printf("\nObrigado por utilizar o aplicativo, ele será encerrado em "
             "instantes...\n");
      break;
    default:
      printf("\nOpção inválida!\n");
      break;
    }
  } while (opcao != 3);

  // Libera a memória alocada pela lista
  Dieta *atual = lista;
  while (atual != NULL) {
    Dieta *proximo = atual->proximo;
    free(atual);
    atual = proximo;
  }

  return 0;
}