#include <stdio.h>
//std = Standard(Pdr�o)
// io = input/output (Entrada/Saida)

int main() {
	int vetor [20], soma = 0;

	for(int i = 0; i < 20; i++) {
		printf("Informe o valor para o vetor %d/20", (i+1));
		scanf("%d", &vetor[i]);
		soma = soma + vetor[i];
	}

	printf("A soma do vetor � %d", soma);
}
