/*
	Faça um programa que leia um número inteiro e retorne o dobro desse número
*/

#include <stdio.h>

int main() {
	int entry;

	printf("Dê um número de entrada: ");
	scanf("%d", &entry);

	entry = entry*2;

	printf("\nO dobro da entrada é: %d\n", entry);

	return 0;
}
