#include <stdio.h>

int main() {

    int numero = 0;

    printf("Entre com um numero de 1 a 10");
    scanf("%d", &numero);

    printf("A tabuada de %d: \n");
    /*printf("%d X %d = %d\n", 1, numero, 1 * numero);
    printf("%d X %d = %d\n", 2, numero, 2 * numero);
    printf("%d X %d = %d\n", 3, numero, 3 * numero);
    printf("%d X %d = %d\n", 4, numero, 4 * numero);
    printf("%d X %d = %d\n", 5, numero, 5 * numero);
    printf("%d X %d = %d\n", 6, numero, 6 * numero);
    printf("%d X %d = %d\n", 7, numero, 7 * numero);
    printf("%d X %d = %d\n", 8, numero, 8 * numero);
    printf("%d X %d = %d\n", 9, numero, 9 * numero);
    printf("%d X %d = %d\n", 10, numero, 10 * numero);*/

    //repete de 1 ate 10
    for (int i=1; i<=10; i++) {
      printf("%d X %d = %d\n", i, numero, i * numero);
    }
    
    //CUIDADO!!!
   /* for(int i=1; i>0; i++) {
        printf("%d, ", i);
    }*/

    for (int i=10; i>0; i--) {
      printf("%d X %d = %d\n", i, numero, i * numero);
    }
    return 0;
}