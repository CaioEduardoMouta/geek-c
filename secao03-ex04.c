#include <stdio.h>
//std = Standard(Pdrão)
// io = input/output (Entrada/Saida)

int main() {
	int num1, num2,soma;

	printf("Informe o primeiro numero");
	scanf("%d", &num1);

	printf("Informe o segundo numero");
	scanf("%d", &num2);

	soma = num1 + num2;

	printf("informe o resultado é %d", soma);
}
