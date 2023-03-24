// Usando o comando switch, faça um algoritmo que leia o número de DDD e informe a qual cidade pertence, considerando só os seguintes valores: 

// 61 - Brasília 

// 71 - Salvador 

// 11 - São Paulo 

// 21 - Rio de Janeiro 

// 32 - Juiz de Fora 

// 19 - Campinas 

// 27 - Vitória 

// 31 - Belo Horizonte 

// Qualquer outro - uma cidade no Brasil sem identificação 



#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "");

    int numeroDDD;

    printf("Insira um número de DDD: ");
    scanf ("%i", &numeroDDD);

    switch (numeroDDD)
    {
    case 61:
        printf ("O número de DDD digitado corresponde ao Estado de Brasília.");
        break;
    case 71:
        printf ("O número de DDD digitado corresponde ao Estado de Salvador.");
        break;
    case 11:
        printf ("O número de DDD digitado corresponde ao Estado de São Paulo.");
        break;
    case 21:
        printf ("O número de DDD digitado corresponde ao Estado de Rio de Janeiro.");
        break;
    case 32:
        printf ("O número de DDD digitado corresponde ao Estado de Juiz de Fora.");
        break;
    case 19:
        printf ("O número de DDD digitado corresponde ao Estado de Campinas.");
        break;
    case 27:
        printf ("O número de DDD digitado corresponde ao Estado de Vitória.");
        break;
    case 31:
        printf ("O número de DDD digitado corresponde ao Estado de Belo Horizonte.");
        break;
    default:
        printf("O número de DDD digitado é uma cidade no Brasil sem identificação.");
        break;
    }
}