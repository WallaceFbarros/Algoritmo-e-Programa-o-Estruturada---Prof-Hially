// Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas
// de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou
// se está sobre um dos eixos cartesianos ou na origem (x = y = 0). Se o ponto estiver na origem,
// escreva a mensagem “Origem”. Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou
// “Eixo Y”, conforme for a situação.


int main () {

    float x1, y1;

    printf("Insira quanto vale o eixo X em um plano qualquer: \n");
    scanf("%f", &x1);
    printf("Insira quanto vale o eixo Y em um plano qualquer: \n");
    scanf("%f", &y1);
    

    if (x1 == 0.0 && y1 == 0.0) {
        printf("Origem\n");
    } else if (x1 > 0 && y1 > 0) {
        printf("Quadrante 1.\n");
    } else if (x1 < 0 && y1 > 0) {
        printf("Quadrante 2.\n");
    } else if (x1 < 0 && y1 < 0) {
        printf("Quadrante 3.\n");
    } else if (x1 > 0 && y1 < 0) {
        printf("Quadrante 4.\n");
    } else if (x1 == 0) {
        printf("Eixo Y\n");
    } else if (y1 == 0) {
        printf("Eixo X\n");
    }
};