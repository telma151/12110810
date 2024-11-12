#include <stdio.h>

int main() {
    char caractere;
    int lado, i, j;

    printf("Qual caractere desenhar?:\n");
    scanf("%c", &caractere);

   
    printf("Qual tamanho dos lados?:\n");
    scanf("%d", &lado);
    
    for (i = 1; i <= lado; i++) {
        for (j = 1; j <= lado; j++) {
            printf("%c ", caractere);
        }
        printf("\n");
    }

    return 0;
}
