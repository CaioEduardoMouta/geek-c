#include <stdio.h>
//std = Standard(Pdrão)
// io = input/output (Entrada/Saida)

int main() {
	int vetor[5], pares[2], cont_p = 0;
	for(int i =0; i < 5; i++) {
		printf("Informe um valor pra o vetor");
		scanf("%d", &vetor[i]);
		if(vetor[1] % 2 == 0) {
			if(vetor[i] > 0) {
				pares[cont_p] = vetor[i];
				cont_p = cont_p + 1;
			}
		}
	}
	for(int i =0; i < cont_p; i++) {
		printf("%d\n", pares[i]);
	}
}
