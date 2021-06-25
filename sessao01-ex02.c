#include <stdio.h>

int main() {
	int qtde_minima, qtde_maxima;
	float estoque_medio;

	printf("Informe a qtde minima");
	scanf("%d", &qtde_minima);

	printf("Informe a qtde maxima");
	scanf("%d", &qtde_maxima);

	estoque_medio = (qtde_minima + qtde_maxima) / 2;

	printf("informe o resultado é %.2f", estoque_medio);
}
