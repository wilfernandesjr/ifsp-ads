/*
	Faça um programa que leia o salário bruto
	e retorne o salário liquido, considerando desconto de 8% do INSS
*/

#import <stdio.h>

int main() {
	float brutSalary, liquidSalary;

	printf("Insira o seu salário bruto: ");
	scanf("%f", &brutSalary);

	liquidSalary = brutSalary * 0.92;

	printf("Seu salário líquido é: %.2f\n", liquidSalary);

	return 0;
}
