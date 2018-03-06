/* 
	Programa 3: calcula a média ponderada entre duas provas 
	media = (w1*p1 + w2*p2) / (w1 + w2)
*/

#include <stdio.h>

int main() {
	int w1, w2;
	float p1, p2, media;

	w1 = 3;
	w2 = 4;

	p1 = 7;
	p2 = 8.2;

	media = (w1*p1 + w2*p2) / (w1 + w2);

	printf("A média ponderada entre as provas é: %f\n", media);

	return 0;
}
