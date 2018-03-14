/*
	Desenvolver um programa que calcula e retorna o Gasto Energético Basal (GEB), utilizando as seguites fórmulas:
	- para os homens: GEB = 66.47 + (13.75*PC) + (5*Alt) - (6.76 * I)
	- para as mulheres: GEB = 655.1 + (9.56*PC) + (1.85*Alt) - (4.67 * I)
	Onde: PC = peso corporal em kg; Alt = altura em cm; I = idade em anos;
*/

#include <stdio.h>

int main() {
	char gender;
	float weight, height, age, geb;

	printf("Qual é o seu gênero (h/m): ");
	scanf("%c", &gender);

	printf("Qual é o seu peso (kg): ");
	scanf("%f", &weight);

	printf("Qual é a sua altura (cm): ");
	scanf("%f", &height);

	printf("Qual é a sua idade (anos): ");
	scanf("%f", &age);

	if (gender == 'h') {
		geb = 66.47 + (13.75 * weight) + (5 * height) - (6.76 * age);
	} else if (gender == 'm') {
		geb = 655.1 + (9.56 * weight) + (1.85 * height) - (4.67 * age);
	} else {
		printf("Por favor, insira um gênero válido.");
		return 0;
	}

	printf("O seu GEB é: %.2f", geb);

	return 0;
}
