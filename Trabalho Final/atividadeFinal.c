#include <stdio.h>
#include <stdlib.h>

// Struct que armazena o produto e suas informações

typedef struct {
  int codigo;
  char descricao[50];
  int quantidade;
  float valor;
} Produto;

// Struct que armazena o estoque da aplicação

typedef struct {
  Produto *produtos;
  int tamanho;
} Estoque;

// Função que inicializa uma lista de estoque vazia

void inicializaEstoque(Estoque *estoque) {
  estoque->produtos = NULL;
  estoque->tamanho = 0;
}

// Função que vai adicionar um produto ao estoque

void adicionaProduto(Estoque *estoque) {
  Produto produto;

  printf("Digite o código do produto: ");
  scanf("%d", &produto.codigo);
  printf("Digite a descrição do produto: ");
  scanf(" %[^\n]s", produto.descricao);
  printf("Digite a quantidade do produto: ");
  scanf("%d", &produto.quantidade);
  printf("Digite o valor do produto: ");
  scanf("%f", &produto.valor);

  estoque->tamanho++;
  estoque->produtos =
      realloc(estoque->produtos, estoque->tamanho * sizeof(Produto));
  estoque->produtos[estoque->tamanho - 1] = produto;

  printf("\nProduto adicionado com sucesso!\n");
}

// Função que percorre o estoque e mostra as informações dos produtos que estão
// no estoque

void mostraEstoque(Estoque *estoque) {

  if (estoque->tamanho <= 0) {
    printf("\nO estoque está vazio\n");
  } else {
    printf("\nOs produtos contidos no estoque são:\n");
    for (int i = 0; i < estoque->tamanho; i++) {
      Produto produto = estoque->produtos[i];
      printf("\n--------------------------------\n");
      printf("Código: %d\n", produto.codigo);
      printf("Descrição: %s\n", produto.descricao);
      printf("Quantidade: %d\n", produto.quantidade);
      printf("Valor: %.2f\n", produto.valor);
      printf("--------------------------------\n");
      printf("\n");
    }
  }
}

// Função que permite ao usuário pesquisar um produto pelo código

void pesquisaProduto(Estoque *estoque) {
  int codigo;

  printf("\nDigite o código do produto: ");
  scanf("%d", &codigo);

  for (int i = 0; i < estoque->tamanho; i++) {
    Produto produto = estoque->produtos[i];
    if (produto.codigo == codigo) {
      printf("\n--------------------------------\n");
      printf("Código: %d\n", produto.codigo);
      printf("Descrição: %s\n", produto.descricao);
      printf("Quantidade: %d\n", produto.quantidade);
      printf("Valor: %.2f\n", produto.valor);
      printf("--------------------------------\n");
      printf("\n");
      return;
    }
  }

  printf("\nProduto não encontrado!\n");
}

// Função que permite ao usuário remover um produto do estoque
void removeProduto(Estoque *estoque) {
  int codigo;

  printf("\nDigite o código do produto que você quer que seja removido: ");
  scanf("%d", &codigo);

  for (int i = 0; i < estoque->tamanho; i++) {
    Produto produto = estoque->produtos[i];
    if (produto.codigo == codigo) {
      for (int j = i; j < estoque->tamanho - 1; j++) {
        estoque->produtos[j] = estoque->produtos[j + 1];
      }
      estoque->tamanho--;
      estoque->produtos =
          realloc(estoque->produtos, estoque->tamanho * sizeof(Produto));
      printf("\nProduto escolhido foi removido com sucesso!\n");
      return;
    }
  }

  printf("\nProduto não cadastrado!\n");
}

int main() {
  Estoque estoque;
  int opcao;

  inicializaEstoque(&estoque);

  do {
    printf("\n");
    printf("===== MENU DE GERÊNCIA DE PRODUTOS =====\n");
    printf("1. Adicionar produto\n");
    printf("2. Gerar relatório de produtos\n");
    printf("3. Consultar produto\n");
    printf("4. Remover produto\n");
    printf("5. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
      adicionaProduto(&estoque);
      break;
    case 2:
      mostraEstoque(&estoque);
      break;
    case 3:
      pesquisaProduto(&estoque);
      break;
    case 4:
      removeProduto(&estoque);
      break;
    case 5:
      printf("\nObrigado por utilizar o aplicativo, ele será encerrado em "
             "instantes...\n");
      break;
    default:
      printf("\nOpção inválida!\n");
      break;
    }
  } while (opcao != 5);

  free(estoque.produtos);

  return 0;
}