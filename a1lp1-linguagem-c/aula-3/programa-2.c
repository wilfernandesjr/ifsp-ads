/*
	Faça um programa que leia 2 notas e retorne a média ponderada segundo a fórmula:
	mp = (3*p1 + 4*p2) / 7
*/

#include <stdio.h>

int main()
{
	int weight1 = 3;
	int weight2 = 4;

	float test1, test2, medium;

	printf("Digite a nota da prova 1: ");
	scanf("%f", &test1);

	printf("Digite a nota da prova 2: ");
	scanf("%f", &test2);

	medium = (weight1*test1 + weight2*test2) / (weight1 + weight2);

	printf("A média ponderada das suas provas é: %.2f\n", medium);

	return 0;
}
