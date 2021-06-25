#include <stdio.h>
//std = Standard(Pdrão)
// io = input/output (Entrada/Saida)

int main() {
	float vetor[5];
	int codigo;

	printf("Informe o codigo");
	scanf("%d", &codigo);
	if(codigo != 0) {
		for(int i = 0; i < 5; i++) {
			printf("Informe um númeor real");
			scanf("%f", &vetor[i]);
		}

		if(codigo == 1) {
			for(int i = 0; i < 5; i++) {
				printf("%.2f\n", vetor[i]);
			}
		}
		if(codigo == 2){
			for(int i = 4; i >= 0; i--) {
				printf("%.2f\n", vetor[i]);
			}
		}
	}

}
