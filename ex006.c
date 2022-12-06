#include <stdio.h>
#include <locale.h>

void main (){
	setlocale(LC_ALL, "portuguese");
	int num;
	printf("Digite um número: ");
	scanf("%i", &num);
	printf("Analisando o número %i, o antecessor é %i e o sucessor é %i. \n", num, (num - 1), (num + 1));
}
