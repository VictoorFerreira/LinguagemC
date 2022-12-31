#include <stdio.h>
#include <locale.h>
void main(){
	setlocale(LC_ALL, "portuguese");
	int ano;
	printf("Digite ano qualquer: ");
	fflush(stdin);
	scanf("%i", &ano);
	if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
		printf("O ano de %i é BISSEXTO!\n", ano);
	}else{
		printf("O ano de %i não é BISSEXTO!\n", ano);
	}
}
