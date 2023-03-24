// Uma empresa vende o mesmo produto para quatro diferentes estados. 
// Cada estado possui uma taxa diferente de imposto sobre o produto. 
// Faça um programa em que o usuário entre com o valor e o estado de destino do produto e o programa retorne o preço final do produto acrescido do imposto do estado 
// em que ele será vendido. Se o estado digitado não for válido, mostrará uma mensagem de erro. 


#include <stdio.h>
#include <locale.h>


int main () {
    setlocale(LC_ALL, "");

    int numeroEstado;
    float precoProduto, valorTotal;

    printf("---------------VENDA DE PRODUTOS---------------\n");
    printf("Estados que nossa empresa comporta com suas respectivas taxas:\n");
    printf("1 - Distrito Federal taxa de 2%%.\n2 - Goiás taxa de 4%%.\n3 - Mato Grosso taxa de 6%%.\n4 - Mato Grosso do Sul taxa de 8%%.\n");

    printf("Digite o número que corresponde ao Estado que será vendido o produto: ");
    scanf("%i", &numeroEstado);
    if (numeroEstado == 1 || numeroEstado == 2 || numeroEstado == 3 || numeroEstado == 4) {

        printf("Digite o valor da mercadoria: ");
        scanf("%f", &precoProduto);

        switch (numeroEstado)
        {
        case 1:
            valorTotal = (precoProduto * 2) / 100 + precoProduto;
            printf("O Produto será vendido para o Estado do Distrito Federal que tem uma taxa de 2%%, o valor do produto é R$%.2f mas com a taxa do Estado fica R$%.2f", precoProduto,valorTotal);
            break;
        case 2:
            valorTotal = (precoProduto * 4) / 100 + precoProduto;
            printf("O Produto será vendido para o Estado do Goiás que tem uma taxa de 4%%, o valor do produto é R$%.2f mas com a taxa do Estado fica R$%.2f", precoProduto,valorTotal);
            break;
        case 3:
            valorTotal = (precoProduto * 6) / 100 + precoProduto;
            printf("O Produto será vendido para o Estado do Mato Grosso que tem uma taxa de 6%%, o valor do produto é R$%.2f mas com a taxa do Estado fica R$%.2f", precoProduto,valorTotal);
            break;
        case 4:
            valorTotal = (precoProduto * 8) / 100 + precoProduto;
            printf("O Produto será vendido para o Estado do Mato Grosso do Sul que tem uma taxa de 8%%, o valor do produto é R$%.2f mas com a taxa do Estado fica R$%.2f", precoProduto,valorTotal);
            break;
        default:
            break;
        }
    } else {
        printf("Número do Estado digitado não é válido.");
    }

    
      




}