#include <stdio.h>

int main() {

	int qtde_horas;
	float valor_hora, salario;

	printf("Qual valor voc� ganha por hora ?");
	scanf("%f", &valor_hora);

	printf("Quantas horas voc� trabalhou esse m�s ?");
	scanf("%d" , &qtde_horas);

	salario = (qtde_horas * valor_hora);

	printf("Neste m�s voc� vai receber %.2f", salario);
}
