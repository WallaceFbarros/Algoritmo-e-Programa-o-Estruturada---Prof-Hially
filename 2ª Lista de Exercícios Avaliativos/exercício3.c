#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "");

    int idade = 0, i, j, qtdJogadorAcima25Anos = 0, qtdTimes = 0, qtdJogadoresTime = 0, qtdJogadoresMenor = 0, qtdJogadoresMaiorPeso = 0, qtdJogadoresGeral = 0;
    float peso = 0, mediaIdade = 0, mediaPeso = 0, porcentagemPEso = 0;


    printf("Insira quantos times o campeonato terá: ");
    scanf("%i", &qtdTimes);

    while (qtdTimes < 3 || qtdTimes > 9) {
        
    printf("Infelizmente o número de times escolhidos não está de acordo com as regras do campeonato, insira novamente.\n");
    printf("Quantos times o campeonato terá: ");
    scanf("%i", &qtdTimes);

    }

    for (i = 0; i < qtdTimes; i++) {

        printf("Insira quantos jogadores o time %i terá: ", i + 1);
        scanf("%i", &qtdJogadoresTime);

        while (qtdJogadoresTime < 6 || qtdJogadoresTime > 11) {

            printf("Infelizmente o número de jogadores escolhido não está de acordo com as regras do campeonato, insira novamente.\n");
            printf("Insira quantos jogadores o time %i terá: ", i + 1);
            scanf("%i", &qtdJogadoresTime);
        }

        for (j = 0; j < qtdJogadoresTime; j++) {

        printf("Digite a idade e peso do jogador %i do time %i: ", i + 1, j + 1);
        scanf("%i %f", &idade, &peso);

        qtdJogadoresGeral++;

        mediaIdade += idade;

        if (idade > 25) {
            qtdJogadorAcima25Anos++;

            mediaPeso += peso;
        }

        if (idade < 18) {
            qtdJogadoresMenor++;
        }

        if (peso > 80) {
            qtdJogadoresMaiorPeso ++;
        }
        
        }

        mediaIdade = mediaIdade / qtdJogadoresTime;
        mediaPeso = mediaPeso / qtdJogadorAcima25Anos;

        printf("A média de idade do time %i é %.2f.\n", i + 1, mediaIdade);
        printf("A média do peso dos jogadores acima de 25 anos do time %i é %.2f.\n", i + 1, mediaPeso);
    }

    printf("\n--------------ESTATÍSTICAS DO CAMPEONATO--------------\n\n");
    printf("A quantidade de jogadores menores de idade (18 anos) nesse campetonato foi de: %i.\n", qtdJogadoresMenor);

    porcentagemPEso = (qtdJogadoresMaiorPeso * 100) / qtdJogadoresGeral;

    printf("A quantidade de jogadores com mais de 80 quilos foi de: %i e sua porcentagem é de %.2f%%.\n", qtdJogadoresMaiorPeso, porcentagemPEso);

    return 0;
}
