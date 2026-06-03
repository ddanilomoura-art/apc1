#include <stdio.h>
#include <string.h>

int main(){

    char verbo[35];
    int tamanho;

    printf("Digite um verbo: ");
    scanf("%s", verbo);

    tamanho = strlen(verbo);

    if (tamanho >= 2 && verbo[tamanho - 2] == 'a' && verbo[tamanho - 1] == 'r')
    {
        printf("O verbo \"%s\" termina com \"ar\".\n", verbo);
    } else {
        printf("O verbo \"%s\" NAO termina com \"ar\".\n", verbo);
    }
    
    
    return 0;
}