#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "portuguese");
	int n, d;
	printf("Digite o n�mero: ");
	fflush(stdin);
	scanf("%i", &n);
	printf("Digite o deslocamento: ");
	fflush(stdin);
	scanf("%i", &d);
	printf("\n----------- OPERA��ES SHIFT -------------------");
	printf("\n Calculando %i >> %i � igual a %i.", n, d, (n>>d));
	printf("\n Calculando %i << %i � igual a %i.", n, d, (n<<d));
}
