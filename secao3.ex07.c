#include <stdio.h>

int main() {

	float altura, peso;

	printf("Qual sua altura ?");
	scanf("%f", &altura);

	peso = (72.7 * altura) - 58;

	printf("Peso é  %.2f", peso);
}

