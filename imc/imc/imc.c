#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	Cálculo do IMC
	@author Thiago Silva Campos
 */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
    printf	("d888888b .88b  d88.  .o88b.\n");	 
	printf	("88'   88'YbdP`88 d8P  Y8 \n");
	printf  ("88    88  88  88 8P  \n");    
   	printf	("88    88  88  88 8b  \n ");   
  	printf	(".88.   88  88  88 Y8b  d8 \n");
	printf	("Y888888P YP  YP  YP  `Y88P'\n"); 
	printf("\n");
	//variaveis
	float imc,peso,altura;
	//entrada
	printf("Digite o seu peso em Kg: ");
	scanf("%f",&peso);
	printf("Digite a sua altura em metros: ");
	scanf("%f",&altura);
	//processamento
	imc = peso / (altura * altura);
	//saída
	printf("IMC: %.2f\n",imc);
	//Classificação de acordo com a tabela IMC
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
		printf("Obesidade III (mórbida)");
	}
	system("pause");
	return 0;
}
