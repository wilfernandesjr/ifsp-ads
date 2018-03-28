/*
Faça um programa que leia 2 numeros inteiros diferentes e os armazene nas variaveis a e b. A seguir, faça uma troca: o valor que está em a irá para b e o valor de b irá para a.
*/

#include <stdio.h>

int main() {
	int a, b, c;

	printf("Digite um valor para A: ");
	scanf("%d", &a);

	printf("Digite um valor diferente para B: ");
	scanf("%d", &b);

	if (a == b) {
		printf("Cê é burro lek. Começa de novo.");
		return 0;
	}

	c = a;
	a = b;
	b = c;

	printf("\nO novo valor de A é %d", a);
	printf("\nO novo valor de B é %d", b);

	return 0;
}
