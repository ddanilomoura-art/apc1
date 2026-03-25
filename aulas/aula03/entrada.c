#include <stdio.h>

int main() {
    //entrada de dados

    char tecla_pressionada;
    
    printf("pressione uma tecla: ");
    scanf("%c", &tecla_pressionada);
    while(getchar() != '\n'); //limpar buffer
    printf("voce pressionou a tecla %c\n", tecla_pressionada);

    int idade;

    printf("informe a sua idade: ");
    scanf("%i", &idade);
    while(getchar() != '\n'); //limpar buffer
    
    
    printf("voce tem %i anos\n", idade);

    float preco;
    printf("informe o preco da passagem: ");//nao coloque "," use "." 
    scanf("%f", &preco);
    while (getchar() != '\n'); //limpar buffer

    printf("o preco da passagem eh %.2f\n", preco);






    return 0;
}