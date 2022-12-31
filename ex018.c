#include <stdio.h>
#include <locale.h>
#include <time.h>
void main(){
	setlocale(LC_ALL, "Portuguese");
	time_t t;
	struct tm*data;
	time(&t);
	data = localtime(&t);
	int ano = data -> tm_year + 1900;
	printf("Atualmente estmaos no ano de %d.\n", ano);
	int nasc;
	printf("Em que ano você nasceu: ");
	fflush(stdin);
	scanf("%d", &nasc);
	int idade = ano - nasc;
	printf("------------------------------------------\n");
	if(idade < 18){
		printf("Você ainda não tem 18 anos. Não pode ser alistar!\n");
	} else {
		printf("Já fez 18 anos. Espero sinceramente que você tem se alistado!\n");	
	}
}
