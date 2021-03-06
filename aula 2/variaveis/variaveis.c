#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	Estudo das Variaveis
	@author Thiago Silva Campos
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	// Tipos de vari�veis
	char professor[30]=("Thiago Silva Campos"); //[30] -> m�ximo de 30 caracteres
	char personal = 's';
	int periodo = 1;
	float cargaHoraria = 30.5;
	double salario = 3500.65;
	int opcao;
	printf("Op��es dispon�veis:\n\n");
	printf("1. Funcion�rios\n");
	printf("2. Aluno\n");
	printf("3. Sobre");
	printf("\n");
	printf("digite a op��o desejada: ");
	scanf("%d",&opcao);
	printf("ACADEMIA PHISICAL\n");
	printf("_______________________________\n");
	// %s -> Ler o tipo de vari�vel
	// , (v�rgula) concatenar(unir) um texto com o conte�do da vari�vel
	printf("Professor: %s\n", professor);
	printf("Personal Trainer(s/n): %c\n", personal);
	printf("Per�odo: %d\n", periodo);
	// .1 antes de%f arredonda para 1 casa decimal
	printf("Carga hor�ria semanal: %f\n", cargaHoraria);
	printf("Sal�rio: %.2lf\n", salario);
	printf("_______________________________\n");
	system("pause");
	system("cls");
	// Entrada de dados
	char aluno[50];
	char sexo;
	int idade;
	float imc,peso,altura;
	printf("CADASTRO DE ALUNO \n\n");
	printf("Nome do aluno: \n");
	// o comando gets � usado especificamente para capturar String(char[])
	gets(aluno);
	printf("Sexo(M/F): ");
	// o comando scanf e� usado para capturar as demais vari�veis
	// o s�mbolo &(amper) � usado para referencia a mem�ria
	scanf("%c",&sexo);
	printf("Idade: ");
	scanf("%d", &idade);
	printf("Peso(kg): ");
	// ATEN��O! Para capturar um n�mero n�o inteiro usar , (v�rgula)
	scanf("%f", &peso);
	printf("Altura(m): ");
	scanf("%f", &altura);
	printf("\n");
	//processamento
	imc = peso / (altura * altura);
	//sa�da
	printf("IMC: %.2f",imc);
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
	printf("C�digos de cores;\n\n");
	system("cls");
	system("color F0");
	system("pause");
	//Classifica��o de acordo com a tabela IMC
	if (imc < 17){
		printf("Muito abaixo do peso\n");
	} else if (imc < 18.5){
		printf("Abaixo do peso\n");
	} else if (imc < 25){
		printf("Peso normal\n");
	} else if (imc < 30){
		printf("Acima do peso\n");
	} else if (imc < 35){
		printf("Obesidade I\n");
	} else if (imc < 40){
		printf("Obesidade II (severa)\n");
	} else {
		printf("Obesidade III (m�rbida)");
	}
	switch (opcao){
		case 1:
			system("cls");
			system("color 1F");
			printf("Gest�o de funcion�rios.............\n");
			break;
		case 2:
			system("cls");
			system("color 4E");
			printf("Notas do Aluno...\n");
			break;
		case 3:
			system("cls");
			system("color 2F");
			printf("Sobre...\n");
			printf("Nome do Desenvolvedor\n");
			break;
		default:
			printf("Op��o inv�lida\n");
			break;
	}
	system("pause");
	return 0;
}
