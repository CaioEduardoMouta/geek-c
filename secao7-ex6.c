#include <stdio.h>

int main() {

	int numero;

	printf("Informe um n�mero entre 1 e 10");

	while(numero < 1 || numero > 10) {
		printf("Informe um n�mero entre 1 e 10");
		scanf("%d", &numero);
	}
	for(int i = 1; i <= 10; i++) {
		printf("%d X %d = %d\n", numero , i, (numero * i));
	}

}
