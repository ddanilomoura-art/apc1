#include <stdio.h>

int main() {

    int opcao = 0;

    do {

        printf("\nMENU PRINCIPAL\n");
        printf("1 - Novo Jogo\n");
        printf("2 - Continuar Jogo\n");
        printf("3 - Ver Pontuacao\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao > ");

        scanf("%i", &opcao);

        while (getchar() != '\n');

        switch (opcao) {

            case 1:
                printf("Seu novo jogo foi criado. Se divirta!\n");
                break;

            case 2:
                printf("Continuando jogo...\n");
                break;

            case 3:
                printf("Voce nao tem pontuacao ainda. Jogue mais!\n");
                break;

            case 4:
                printf("Obrigado por jogar. Ate logo!\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 4);

    return 0;
}