#include <stdio.h>
#include <ctype.h>
int main() {
	float altura, peso_ideal;
	char sexo;

	printf("Informe sua altura");
	scanf("%f", &altura);
	gets(stdin); //corrigir bug
	printf("Informe o sexo m/f");
	scanf("%c", &sexo);

	if(sexo == 'm') {
		peso_ideal = (72.7 * altura) - 58;
		printf("Seu peso ideal é %.2f", peso_ideal);
	}
	if(sexo == 'f') {
		peso_ideal = (62.1 * altura) - 44.7;
		printf("Seu peso ideal é %.2f", peso_ideal);
	}
	if(sexo != 'm' && sexo != 'f') {
		printf("Sexo indefinido");
	}
}
