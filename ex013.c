#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "portuguese");
	int n1, n2;
	printf("Digite o primeiro valor: ");
	fflush(stdin);
	scanf("%i", &n1);
	printf("Digite o segundo valor: ");
	fflush(stdin);
	scanf("%i", &n2);
	printf("\n----------- OPERA��ES BITWIESE -------------------");
	printf("\n Calculando %i & %i � igual a %i.", n1, n2, (n1&n2));
	printf("\n Calculando %i | %i � igual a %i.", n1, n2, (n1|n2));
	printf("\n Calculando %i ^ %i � igual a %i.", n1, n2, (n1^n2));
}
