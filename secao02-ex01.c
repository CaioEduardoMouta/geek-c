#include <stdio.h>
//std = Standard(Pdr�o)
// io = input/output (Entrada/Saida)

int main() {
	int num1, num2,soma, multiplicacao;

	printf("Informe o primeiro numero");
	scanf("%d", &num1);

	printf("Informe o segundo numero");
	scanf("%d", &num2);

	soma = num1 + num2;
	multiplicacao = soma * num1;

	printf("informe o resultado � %d", multiplicacao);
}
