#include <stdio.h>

int main() {

	float poluicao;
	printf("Informe um número");
	scanf("%f", &poluicao);

	if(poluicao >= 0.3 && poluicao < 0.4) {
		printf("Grupo 1 suspende as atividades");
	} else if (poluicao >= 0.4 && poluicao < 0.5) {
		printf("Grupo 1 e 2 suspende");
	} else if (poluicao >= 0.5) {
		printf("Todos suspendem");
	} else {
		printf("Niveis Aceitaveis");
	}

}
