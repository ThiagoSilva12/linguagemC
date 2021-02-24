#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	Estudo das Variaveis
	@author Thiago Silva Campos
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	// Tipos de variáveis
	char professor[30]=("Thiago Silva Campos"); //[30] -> máximo de 30 caracteres
	char personal = 's';
	int periodo = 1;
	float cargaHoraria = 30.5;
	double salario = 3500.65;
	printf("ACADEMIA PHISICAL\n");
	printf("_______________________________\n");
	// %s -> Ler o tipo de variável
	// , (vírgula) concatenar(unir) um texto com o conteúdo da variável
	printf("Professor: %s\n", professor);
	printf("Personal Trainer(s/n): %c\n", personal);
	printf("Período: %d\n", periodo);
	// .1 antes de%f arredonda para 1 casa decimal
	printf("Carga horária semanal: %f\n", cargaHoraria);
	printf("Salário: %.2lf\n", salario);
	printf("_______________________________\n");
	system("pause");
	system("cls");
	// Entrada de dados
	char aluno[50];
	char sexo;
	int idade;
	float peso,altura;
	printf("CADASTRO DE ALUNO \n\n");
	printf("Nome do aluno: \n");
	// o comando gets é usado especificamente para capturar String(char[])
	gets(aluno);
	printf("Sexo(M/F): ");
	// o comando scanf eé usado para capturar as demais variáveis
	// o símbolo &(amper) é usado para referencia a memória
	scanf("%c",&sexo);
	printf("Idade: ");
	scanf("%d", &idade);
	printf("Peso(kg): ");
	// ATENÇÃO! Para capturar um número não inteiro usar , (vírgula)
	scanf("%f", &peso);
	printf("Altura(m): ");
	scanf("%f", &altura);
	printf("\n"),
	system("pause");
	system("cls");
	printf("Ficha do aluno(a):\n");
	prints("________________________________\n");
	prints("Aluno: %s\n", aluno);
	prints("Sexo: %c\n", sexo);
	printf("Idade: %c\n", sexo);
	printf("Peso: %.2f\n", peso);
	printf("Altura: %.2f",altura);;
	prints("________________________________\n");
	system("pause");
	return 0;
}
