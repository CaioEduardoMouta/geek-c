#include <stdio.h>

int main() {

	int qtde_horas;
	float valor_hora, salario;

	printf("Qual valor você ganha por hora ?");
	scanf("%f", &valor_hora);

	printf("Quantas horas você trabalhou esse mês ?");
	scanf("%d" , &qtde_horas);

	salario = (qtde_horas * valor_hora);

	printf("Neste mês você vai receber %.2f", salario);
}
