#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "portuguese");
	printf("\n==================================\n");
	printf("\\a \t=\t Beep \n");
	printf("\\n \t=\t Nova Linha \n");
	printf("\\t \t=\t Tabula��o \n");
	printf("\\\\ \t=\t Barra \n");
	printf("%%%% \t=\t Porcentagem \n");
	printf("\\\? \t=\t Interroga��o \n");
	printf("==================================\n");
}
