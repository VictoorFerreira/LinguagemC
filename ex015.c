#include <stdio.h>
#include <locale.h>
void main(){
	setlocale(LC_ALL, "portuguese");
	float nota1, nota2, media;
	printf("Digite a primeira nota: ");
	fflush(stdin);
	scanf("%f", &nota1);
	printf("Digite a segunda nota: ");
	fflush(stdin);
	scanf("%f", &nota2);
	media = (nota1 + nota2) / 2;
	if (media >= 7){
		printf("PARABENS!");
	}
	printf("A sua média final foi de %.2f.\n", media);
}
