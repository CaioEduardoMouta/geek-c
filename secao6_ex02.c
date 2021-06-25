#include<stdio.h>

int main() {
	int n, a, b;

	printf("Informe um numero");
	scanf("%d", &n);

	if(n > 0) {
		a = n;
		printf("O %d numero é positivo", n);
	}else {
		b = n;
		printf("O %d número é negativo", n);
	}
}
