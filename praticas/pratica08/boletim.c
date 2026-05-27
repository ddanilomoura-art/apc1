#include <stdio.h>

int main(){

    float notas[10][2];
    float media[10];
    int i, j;

    for (i = 0; i < 10; i++)
    {
        printf("\naluno %d", i + 1);

        for (j = 0; j < 2; j++)
        {
            printf("\ndigite a nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
        
        media[i] = (notas[i][0] + notas[i][1]) / 2;
    }
    
    printf("\n===== BOLETIM =====\n");

    for (i = 0; i < 10; i++)
    {
        printf("\naluno %d -> nota 1: %.2f\n nota 2: %.2f\n media: %.2f ", i + 1, notas[i][0], notas[i][1], media[i]);
    }
    

    return 0;
}