#include <stdio.h>
#include <locale.h>

float inflacionarPreco(float preco) {
    if (preco < 100) {
        return preco * 1.1;
    } else {
        return preco * 1.2;
    }
}

int main() {

    setlocale(LC_ALL, "");

    float preco, novoPreco;
    
    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    novoPreco = inflacionarPreco(preco);

    printf("Novo preço do produto: R$ %.2f\n", novoPreco);

    return 0;
}
