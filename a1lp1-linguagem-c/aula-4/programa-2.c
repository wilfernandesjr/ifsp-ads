/* 
	Faça um programa que leia um número inteiro e retorne se é par ou ímpar
*/

#include <stdio.h>

int main() {
	int number;

	printf("Type a integer number: ");
	scanf("%d", &number);

	if (number%2 == 0) {
		printf("\n The number %d is even", number);
	} else {
		printf("\n The number %d is odd", number);
	}

	return 0;
}
