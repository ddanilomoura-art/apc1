#include <stdio.h>

int main() {
    int idade;
    float altura;
    char sexo;
    float peso;

    printf("informe sua idade: ");
    scanf("%i", &idade);
    while (getchar() != '\n');

    printf("informe sua altura: ");
    scanf("%f", &altura);
    while (getchar() != '\n');

    printf("informe seu sexo utilizando M ou F: ");
    scanf("%c", &sexo);
    while (getchar() != '\n');

    printf("informe seu peso: ");
    scanf("%f", &peso);
    while (getchar() != '\n');

printf("=============================================\n");
printf("            INFORMACOES CADASTRAIS                 \n");
printf("=============================================\n");
printf("Idade %i\n", idade);
printf("Altura %.2f\n", altura);
printf("Sexo %c\n", sexo);
printf("Peso %.2f\n", peso);
    return 0;
}