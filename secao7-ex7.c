#include <stdio.h>

int main() {
	int contador_total = 0, contador_sit_1 = 0, contador_sit_2 = 0,
		contador_sit_3 = 0, contador_sit_4 = 0, indentificacao, defeito;

	printf("Informe a identificação ");
	scanf("%d", &indentificacao);

	while(indentificacao != 0) {
		printf("1 - Necessita de esfera. \n");
		printf("2 - Necessita de limpeza. \n");
		printf("3 - Necessita de cabo. \n");
		printf("4 - Quebrado ou Inutilizado. \n");
		printf("Informe o tipo de defeito: \n");
		scanf("%d", &defeito);

		if(defeito == 1) {
			contador_sit_1 = contador_sit_1 + 1;
		}
		if(defeito == 2) {
			contador_sit_2 = contador_sit_2 + 1;
		}
		if(defeito == 3) {
			contador_sit_3 = contador_sit_3 + 1;
		}
		if(defeito == 4) {
			contador_sit_4 = contador_sit_4 + 1;
		}

		contador_total = contador_total + 1;
		printf("Informe a identificação ");
		scanf("%d", &indentificacao);
	}
	float p1,p2,p3,p4;
	p1 = ((float)contador_sit_1 / (float)contador_total * 100.0);
	p2 = ((float)contador_sit_2 / (float)contador_total * 100.0);
	p3 = ((float)contador_sit_3 / (float)contador_total * 100.0);
	p4 = ((float)contador_sit_4 / (float)contador_total * 100.0);
	printf("Qtde de Mouses %d" , contador_total);
	printf("Situacao \t\t\tQuantidade \tPercentual\n");
	printf("1-Necessita de esfera \t\t\t%d \t%.2f%%\n", contador_sit_1, p1);
	printf("1-Necessita de Limepeza \t\t\t%d \t%.2f%%\n", contador_sit_2, p2);
	printf("1-Necessita de Cabo \t\t\t%d \t%.2f%%\n", contador_sit_3, p3);
	printf("1-Quebrado/ inutilizado \t\t\t%d \t%.2f%%\n", contador_sit_4, p4);
}
