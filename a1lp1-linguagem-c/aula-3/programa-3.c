/*
	Programa que leia o peso em KG e a altura em metros e calcule o IMC
*/

#import <stdio.h>

int main() {
	float weight, height, imc;

	printf("Digite o seu peso: ");
	scanf("%f", &weight);

	printf("Digite a sua altura: ");
	scanf("%f", &height);

	imc = weight / (height*height);

	printf("O seu IMC é: %.2f\n", imc);

	return 0;
}
