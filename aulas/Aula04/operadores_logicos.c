#include <stdio.h>

int main() {
    int idade;

    printf("entre com a sua idade: ");
    scanf("%i", &idade);
    while(getchar() != '\n');

    printf("voce eh uma crianca? %i\n", idade >= 0 && idade <= 12);
    // && => 0 false E qualquer coisa = sempre falso
    printf("voce eh um adolescente? %i\n", idade > 12 && idade < 16);
    printf("voce eh um jovem? %i\n", idade >= 16 && idade <= 20);

    // || => 1 verdadeiro OU qualquer coisa = Sempre Verdadeiro
    printf("voce tem prioridade para vacinar? %i\n", idade <= 6 || idade >= 60);

    // ! => NAO verdadeiro = Falso, NAO Falso = Verdadeiro
    printf("voce naum pode votar? %i\n", !(idade >= 16));

    
    return 0;
}