#include <stdio.h>
#include <string.h>
int main() {

	char nome[100], senha[100];

	printf("Informe o nome:");
	gets(nome);
	printf("Informe a senha");
	gets(senha);

	while(!strcmp(nome,senha)) {
		printf("Nome de usuário e senha devem ser diferentes");
		printf("Informe o nome:");
		gets(nome);
		printf("Informe a senha");
		gets(senha);
	}
}
