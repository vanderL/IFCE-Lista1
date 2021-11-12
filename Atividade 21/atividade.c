#include <stdio.h>
#include <stdlib.h>

int main() {
	unsigned int numero;
	int tamanho = 5;
	printf("Digite um número de %d dígitos: ", tamanho);

	scanf("%d", &numero);

	if (numero < pow(10, tamanho-1) || numero > pow(10, tamanho)-1) {
		printf("Número inválido! \n");
		return 1;
	}

	int isPalindromo = 1;
	int pos;
	int numComparado1;
	int numComparado2;
	for (pos=0; pos<tamanho/2; pos++) {
		numComparado1 = (numero % (int) pow(10, pos+1)) / pow(10, pos);
		numComparado2 = (numero / (int) pow(10, tamanho-(pos+1))) % 10;

		if (numComparado1 != numComparado2) {
			isPalindromo = 0;
			break;
		}
	}

	if (isPalindromo) {
		printf("Número dado é palíndromo\n");
	} else {
		printf("Número dado não é palíndromo\n");
	}

	return 0;