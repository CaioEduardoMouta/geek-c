#include<stdio.h>

int main() {
	int n, a, b;

	printf("Informe um numero");
	scanf("%d", &n);

	if(n > 0) {
		a = n;
		printf("O %d numero � positivo", n);
	}else {
		b = n;
		printf("O %d n�mero � negativo", n);
	}
}
