#include <stdio.h>
#include <string.h>

int main() {
    int n;

    printf("Quantas palavras deseja digitar? ");
    scanf("%d", &n);

    char lista[n][50];

    for (int i = 0; i < n; i++) {
        printf("Digite a palavra %d: ", i + 1);
        scanf("%49s", lista[i]);
    }

    printf("\nPalavras digitadas:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", lista[i]);
    }

    return 0;
}