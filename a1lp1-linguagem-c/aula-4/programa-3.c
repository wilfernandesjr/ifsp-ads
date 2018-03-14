/*
	Faça um programa que leia um ano (4 dígitos) e retorne se houve Olímpiadas de Verão (a partir de 1896) ou Copa do Mundo de Futebol (a partir de 1930).
*/

#include <stdio.h>

int main() {
	int year;

	printf("Type a year (4 digits): ");
	scanf("%d", &year);

	if ((year-1896)%4 == 0 && year >= 1896) {
		printf("The year %d had a summer olympics", year);
	}

	if ((year-1930)%4 == 0 && year >= 1930) {
		printf("The year %d had a World Cup", year);
	}

	return 0;
}
