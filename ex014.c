#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "portuguese");
	int n, d;
	printf("Digite o número: ");
	fflush(stdin);
	scanf("%i", &n);
	printf("Digite o deslocamento: ");
	fflush(stdin);
	scanf("%i", &d);
	printf("\n----------- OPERAÇÕES SHIFT -------------------");
	printf("\n Calculando %i >> %i é igual a %i.", n, d, (n>>d));
	printf("\n Calculando %i << %i é igual a %i.", n, d, (n<<d));
}
