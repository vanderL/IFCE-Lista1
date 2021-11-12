#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdio.h>

int main() {
	unsigned long int numero;
	printf("Digite um número: ");
	scanf("%lu", &numero);

	unsigned long int fatorial = 1;
	while(numero > 1) {
		fatorial *= numero;
		numero--;
	}

	printf("Fatorial: %lu\n", fatorial);
}
