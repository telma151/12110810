#include <stdio.h>

void D_Quadrado(char C, int N) {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            printf("%c ", C);
        }
        printf("\n");
    }
}

int main() {
    char caractere;
    int tamanho;

    printf("Qual caractere desenhar?:\n");
    scanf(" %c", &caractere);

    printf("Qual tamanho dos lados: ");
    scanf("%d", &tamanho);

    D_Quadrado(caractere, tamanho);
	// exemplos
	D_Quadrado("*", 10);
	D_Quadrado("S", 2*5);
	
	 }
    
	return 0;
}
