/*
Compare dois números. Eles são múltiplos?
*/

#include <stdio.h>

int main() {
	int a, b;

	printf("Digite um número inteiro: ");
	scanf("%d", &a);

	printf("Digite outro número inteiro: ");
	scanf("%d", &b);

	if (a == b) {
		printf("Cê é burro, cara. Começa de novo.");
		return 0;
	}

	if (a < 0)
		a = -1*a;
	if (b < 0)
		b = -1*b;

	if (a > b) {
		if (a%b == 0) {
			printf("%d e %d são múltiplos.\n", a, b);
		} else {
			printf("%d e %d não são múltiplos.\n", a, b);
		}
	} else {
		if (b%a == 0) {
			printf("%d e %d são múltiplos.\n", a, b);
		} else {
			printf("%d e %d não são múltiplos.\n", a, b);
		}
	}

	return 0;
}
