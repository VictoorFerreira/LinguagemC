#include <stdio.h>
#include <locale.h>
#include <time.h>
void main(){
	setlocale(LC_ALL, "portuguese");
	//pegar a hora atual
	time_t t;
	struct tm*hora;
	time(&t);
	hora = localtime(&t);
	int h = hora->tm_hour;
	//cabeçalho do programa
	int inicio = 19; //mudar o valor para considerar o horario do filme
	int preco = 20;
	printf("\n===== Cinema ESTUDONAUTA ======\n");
	printf("Horario do filme: 19h --- Preço do ingresso: R$20,00\n");
	printf("--------------------------------------------------\n");
	printf("Hora atual: %i\n\n\n", h);
	//entrada de dados
	float din;
	printf("Quanto dinheiro você tem: R$");
	fflush(stdin);
	scanf("%f", &din);
	//verificação
	if(h < inicio && din >= preco){
		printf("Você consegue comprar o ingresso! Seja bem-vindo(a)\n");
	}else{
		printf("Infelzmente não é possivel comprar o ingresso! Volte outro dia!\n");
	}
}
