#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "portuguese");
	int num;
	printf("Digite um n�mero qualquer: ");
	fflush(stdin);
	scanf("%i", &num);
	printf("O numero %i que voc� digitou � %s.\n", num, (num%2==0)?"PAR":"IMPAR");
}
