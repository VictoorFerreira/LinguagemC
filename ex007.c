#include <stdio.h>
#include <locale.h>

void main (){
	setlocale(LC_ALL, "portuguese");
	int num;
	printf("Digite um n�mero : ");
	scanf("%i", &num);
	printf("Analisando o n�mero %i, seu dobro � %i e a ter�a parte � %.2f.", num, (num * 2), ((float)num / 3));
}
