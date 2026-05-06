#include <stdio.h>

int main(){
    char sexo;

    printf("Digite seu sexo usando 'M' OU 'F': ");
    scanf("%c", &sexo);
    while (getchar() !='\n');
    
    int idade;

    printf("Digite sua idade: ");
    scanf("%i", &idade);
    while (getchar() !='\n');

    float altura;

    printf("Informe sua altura: ");
    scanf("%f", &altura);
    while (getchar() !='\n');

    float peso;

    printf("Informe seu peso: ");
    scanf("%f", &peso);
    while (getchar() !='\n');

    printf("Seu sexo eh: %c\n", sexo);
    printf("Sua idade eh: %i anos\n", idade);
    printf("Sua altura eh: %.2f\n", altura);
    printf("Seu peso eh: %2.f kg\n", peso);



    return 0;
}