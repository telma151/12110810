#include <stdio.h>  

int maiorDeDois(int num1, int num2) {
		
	if (num1 > num2) {

		return num1;
	}

	else if (num1 == num2) {

		return num1;
	}

	else
		return num2;

}

int main() {

	int i, j, k, maior;

	printf("Insira o valor do primeiro numero: \n");
	scanf_s(" %d", &i);

	printf("Insira o valor do segundo numero: \n");
	scanf_s(" %d", &j);

	printf("Insira o valor do terceiro numero: \n");
	scanf_s(" %d", &k);

	maior = maiorDeDois(i, j);

	maior = maiorDeDois(maior, k);


	printf(" O maior dos três numeros apresentados, é: %d", maior);

	return 0;

}