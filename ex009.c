#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "portuguese");
	char nome[20];
	float n1, n2, m;
	printf("Nome do aluno: ");
	fflush(stdin);
	gets(nome);
	printf("Nota 1: ");
	fflush(stdin);
	scanf("%f", &n1);
	printf("Nota 2: ");
	fflush(stdin);
	scanf("%f", &n2);
	m = (n1 + n2) / 2;
	printf("O aluno %s tirou as notas %.1f e %.1f. \n", nome, n1, n2);
	printf("A m�dia final foi de %.1f.\n", m);
}
