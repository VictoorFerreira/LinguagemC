#include <stdio.h>
#include <locale.h>

void main (){
	setlocale(LC_ALL, "portuguese");
	char letra;
	printf("Digite uma letra: ");
	letra = getchar();
	char antes, depois;
	antes = letra - 1;
	depois = letra + 1;
	printf("Antes da letra %c temos a letra %c. Depois temos a letra %c. \n", letra, antes, depois);
}
