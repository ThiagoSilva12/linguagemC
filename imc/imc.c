#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	C�lculo do IMC
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
	//sa�da
	printf("IMC: %.2f\n",imc);
	system("pause");
	return 0;
}
