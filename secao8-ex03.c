#include <stdio.h>
//std = Standard(Pdr�o)
// io = input/output (Entrada/Saida)

int main() {
	int vetor[10];

	for(int i = 0; i < 10; i++) {
		printf("Informe o valor para o vetor");
		scanf("%d", &vetor[i]);
	}
	for(int i = 9; i >= 0; i--) {
		printf("%d\n", vetor[i]);
	}
}
