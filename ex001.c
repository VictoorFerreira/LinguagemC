#include <stdio.h>
#include <locale.h>

void main (){
	setlocale(LC_ALL, "portuguese");
	printf("Listagem de Alunos\n");
	printf("Nome \t\t Nota \n");
	printf("---------------------------\n");
	printf("Ana Beatriz \t 8.5\n");
	printf("Bianca Martins \t 9.0\n");
	printf("Claúdio Sá \t 5.5\n");
	printf("Giovana Silva \t 7.5\n");
}
