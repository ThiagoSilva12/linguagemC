#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	Gestão Escolar
	@author Thiago Silva Campos
 */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	printf("Gestão escolar\n");
	char aluno[30]
	char sexo = 'm/f';
	int idade;
	printf("Aluno: %s\n",aluno);
	printf("Sexo: ");
	system("pause");
	system("cls");
	//Entada de dados
	printf("Cadastro do aluno\n");
	printf("Nome do aluno: \n");
	printf("Idade: \n");
	scanf("%f",&idade);
	printf("Sexo(M/F): \n");
	scanf("%f",&sexo);
	system("pause");
	system("cls");
	return 0;
}
