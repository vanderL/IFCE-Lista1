#include <stdio.h>
#include <stdlib.h>

int main() {
	char diasDaSemana[][8] = {
		"domingo",
		"segunda",
		"terça",
		"quarta",
		"quinta",
		"sexta",
		"sábado"
	};

	int dia = 0;
	int diaValido;
	do {
		printf("Digite um numero (1-7) correspondente a um dia da semana: ");
		scanf("%d", &dia);

		diaValido = (dia > 0 && dia < 8);
		if (!diaValido) {
			printf("Numero de dia nao valido!\n\n");
		}
	} while (!diaValido);

	printf("Dia da semana: %s\n", diasDaSemana[dia-1]);
}