#include <stdio.h>

int main (){
	int numerA, numerB, numerT;
	
	
	printf("Insira o primeiro dado: "); //indicando para o usu�rio onde colocar o primeiro n�mero da soma
	scanf("%d", &numerA);
	printf("Insira o segundo dado:"); //indicando para o usu�rio onde vai entrar o segundo n�mero
	scanf("%d", &numerB);
	
	numerT = numerA + numerB; //opera��o da soma
	printf("=====================================================================================================\n");//mostrando o resultado da soma para o usu�rio
	printf("Resultado da soma: %d\n", numerT);
	printf("=====================================================================================================\n");//mostrando o resultado da soma para o usu�rio
	
	
	
}
