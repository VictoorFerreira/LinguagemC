#include <stdio.h>
#include <locale.h>
#include <time.h>
void main(){
	setlocale(LC_ALL, "portuguese");
	time_t t;
	struct tm*data;
	time(&t);
	data = localtime(&t);
	int ano = data -> tm_year + 1900;
	int nasc;
	printf("Em que ano você nasceu: ");
	fflush(stdin);
	scanf("%i", &nasc);
	int idade = ano - nasc;
	printf("Você tem %d anos, certo?\n Seja Bem vindo(a) ao Banco Estudnauta.\n", idade);
	if(idade >= 65){
		printf("============== ATENÇÂO!! Dirija-se para a fila PREFENCIAL!! ===========\n");
	}
	printf("---------------------------------------\n");
}
