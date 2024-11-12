#include <stdio.h>

int maiorDeDois(int a, int b) {
    return (a > b) ? a : b; 
}

int maiorDeTres(int x, int y, int z) {
    return maiorDeDois(maiorDeDois(x, y), z); 
}

int main() {
    int n1, n2, n3;
  
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    
	printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    
	printf("Digite o terceiro numero: ");
    scanf("%d", &n3);

    int maior = maiorDeTres(n1, n2, n3);

    printf("Entre os tres o numeros maior e %d, %d e %d e: 
	%d\n", n1, n2, n3, maior);

    return 0;
}
