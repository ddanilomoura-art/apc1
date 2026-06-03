#include <stdio.h>
#include <string.h>

int main(){

    char primeiro_nome[15];
    char ultimo_nome[15];
    char nome_completo[35];

    printf("Escreva seu primeiro nome: ");
    scanf("%s", primeiro_nome);

    printf("Escreva seu ultimo nome: ");
    scanf("%s", ultimo_nome);

    strcpy(nome_completo, primeiro_nome);
    strcat(nome_completo, " ");
    strcat(nome_completo, ultimo_nome);

    printf("Nome completo: %s\n", nome_completo);


    return 0;
}