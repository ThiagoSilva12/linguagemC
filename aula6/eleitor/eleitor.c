#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	Exemplo de uso dos operadores l�gicos
	@auhor Thiago Silva Campos
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	//vari�veis
	int idade;
	printf("Verificar obrigatoriedade de votar\n\n");
	//entrada
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	//processamento / sa�da
	if (idade < 16){
		printf("PROIBIDO VOTAR\n");	
	} else if (idade > 17 && idade < 71){
		printf("VOTO OBRIGAT�RIO\n");
	} else {
		printf("VOTO FACULTATIVO\n");
	}
	system("pause");
	return 0;
}
