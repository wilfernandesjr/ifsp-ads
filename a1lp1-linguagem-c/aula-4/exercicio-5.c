/*
	Desenvolva um programa que leia o peso (em kg) e altura (em metros) e em seguida calcule o IMC e mostre qual a situação do adulto de acordo com a tabela
*/

#include <stdio.h>

int main() {
	float weight, height, imc;

	printf("Insira o seu peso (kg): ");
	scanf("%f", &weight);

	printf("Insira a sua altura (metros): ");
	scanf("%f", &height);

	imc = weight / (height*height);

	if (imc < 20) {
		printf("O seu IMC (%.2f) significa ABAIXO DO PESO!", imc);
	} else if (imc >= 20 && imc < 25) {
		printf("O seu IMC (%.2f) significa PESO NORMAL!", imc);
	} else if (imc >= 25 && imc < 30) {
		printf("O seu IMC (%.2f) significa ACIMA DO PESO!", imc);
	} else if (imc >= 30 && imc < 34) {
		printf("O seu IMC (%.2f) significa QUE CÊ TÁ CAMINHANDO PRO ABATE, LEITÃO!", imc);
	} else {
		printf("O seu IMC (%.2f) significa que VOCÊ É UM ZÉ GORDÃO, BROTHER", imc);
	}

	return 0;
}