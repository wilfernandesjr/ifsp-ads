/*
	Exercicio 1, da Lista 2:

	Faça um programa para calcular o salário dos funcionários e o valor da gratificação a receber. Os dados de entrada são o número de horas trabalhadas e o valor da hora (salário = número de horas * valor da hora). Se o salário for menor que R$1500 o valor da gratificação é R$300; se for maior, o valor é de R$500. O programa deverá calcular o valor da gratificação.
*/

#include <stdio.h>

int main() {
	float hours, value, salary, finalSalary, bonus;

	printf("How many hours did you work? \t");
	scanf("%f", &hours);

	printf("How much does your work time cost? \t");
	scanf("%f", &value);

	salary = hours * value;

	if (salary <= 1500) {
		bonus = 300;
	} else {
		bonus = 500;
	}

	finalSalary = salary + bonus;

	printf("\n Your final salary is: R$%.2f \n", finalSalary);
	printf("\n Your bonus is: R$%.2f \n", bonus);

	return 0;
}