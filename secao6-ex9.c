#include <stdio.h>

int main() {

	int n;
	printf("Informe um número");
	scanf("%d", &n);


	if(n % 2 == 0) {
	printf("Numero Par");
	}else {
	printf("Numero Impar");
	}

	if(n > 0) {
		printf("Numero maior que 0");
	}else {
		printf("Numero menor que 0");
	}
}
