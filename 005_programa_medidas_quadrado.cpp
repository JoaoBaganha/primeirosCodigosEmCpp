#include <stdio.h>
#include <math.h>

float lado, perimetro, area, diagonal;

int main(){
	printf("Insira a medida do lado do quadrado: ");
	scanf("%f", &lado);//box para inserir valor do lado
	perimetro = lado * 4;
	area = pow(lado, 2); //opera��o atribuindo os valores que o usu�rio deseja
	diagonal = lado * sqrt(2);
	
	printf("Medida do perimetro: %f\n", perimetro);
	printf("Medida da area: %f\n", area);
	printf("Medida da diagonal: %f\n", diagonal); //mostrando ao usu�rio o resultado das opera��es

}


