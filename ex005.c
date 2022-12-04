#include <stdio.h>
#include <locale.h>
#include <stdio.h>
#include <time.h>

void main(){
	setlocale(LC_ALL, "portuguese");
	srand(time(NULL));
	printf("Vou pensar em um número entre 1 e 5. Tente adivinhar!\n");
	int nc = rand() % 5 + 1;
	int nj;
	printf("Qual é o seu palpite? ");
	scanf("%i", &nj);
	printf("Eu pensei no número %i e você pensou no número %i. \n", nc, nj);
}
