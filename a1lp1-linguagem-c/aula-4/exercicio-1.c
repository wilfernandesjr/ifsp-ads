/* 
	A partir de 3 notas fornecidas de um aluno, informe se ele foi aprovad, ficou de recuperação ou foi reporvado. A média de aprovação é >= 7.0; a média de recuperação é >= 5 e < 7.0; e a média do reprovado é > 5.0
*/

#include <stdio.h>

int main() {
	float n1, n2, n3, average;

	printf("Insira a primeira nota: ");
	scanf("%f", &n1);

	if (n1 < 0 || n1 > 10) {
		printf("Entrada inválida! A nota deve ser entre 0 e 10. Reinicie o programa.");
		return 0;
	}

	printf("Insira a segunda nota: ");
	scanf("%f", &n2);

	if (n2 < 0 || n2 > 10) {
		printf("Entrada inválida! A nota deve ser entre 0 e 10. Reinicie o programa.");
		return 0;
	}

	printf("Insira a terceira nota: ");
	scanf("%f", &n3);

	if (n3 < 0 || n3 > 10) {
		printf("Entrada inválida! A nota deve ser entre 0 e 10. Reinicie o programa.");
		return 0;
	}

	average = (n1 + n2 + n3) / 3;

	if (average >= 7)
		printf("\nAluno APROVADO com média %.2f", average);
	else if (average >= 5 && average < 7)
		printf("\nAluno em RECUPERAÇÃO com média %.2f", average);
	else if (average < 5)
		printf("\nAluno REPROVADO com média %.2f", average);

	return 0;
}