#include  <stdio.h>
int main(){
	int pin1, pin2;
	printf("Escolha seu pin: ");
	scanf ("%d", &pin1);
	printf ("========================================================================\n");
	printf("Insira seu pin: ");
	scanf("%d", &pin2);
	if(pin1 == pin2){
		printf("Acesso garantido!\n");
	}else {
		printf("Acesso negado!\n");
	}

}

