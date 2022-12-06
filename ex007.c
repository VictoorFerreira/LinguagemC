#include <stdio.h>
#include <locale.h>

void main (){
	setlocale(LC_ALL, "portuguese");
	int num;
	printf("Digite um número : ");
	scanf("%i", &num);
	printf("Analisando o número %i, seu dobro é %i e a terça parte é %.2f.", num, (num * 2), ((float)num / 3));
}
