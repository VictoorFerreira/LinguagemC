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
	printf("Em que ano voc� nasceu: ");
	fflush(stdin);
	scanf("%d", &nasc);
	int idade = ano - nasc;
	printf("------------------------------------------\n");
	if(idade < 18){
		printf("Voc� ainda n�o tem 18 anos. N�o pode ser alistar!\n");
	} else {
		printf("J� fez 18 anos. Espero sinceramente que voc� tem se alistado!\n");	
	}
}
