#include <stdio.h>
#include <locale.h>

void main (){
	setlocale(LC_ALL, "portuguese");
	int num;
	printf("Digite um n�mero: ");
	scanf("%i", &num);
	printf("Analisando o n�mero %i, o antecessor � %i e o sucessor � %i. \n", num, (num - 1), (num + 1));
}
