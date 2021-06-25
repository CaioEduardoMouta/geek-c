#include <stdio.h>

int main() {

	int n,maior = 0;

	printf("Informe o numero");
	scanf("%d", &n);

	while (n != 0){
		if(n > maior) {
			maior = n;
		}

		printf("Informe o numero");
			scanf("%d", &n);
	}
	printf("O maior número é %d", maior);

}
