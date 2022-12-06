#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "portuguese");
	float nota1, nota2, media;
	printf("Primeira Nota: ");
	fflush(stdin);
	scanf("%f", &nota1);
	printf("Segunda Nota: ");
	fflush(stdin);
	scanf("%f", &nota2);
	media = (nota1 + nota2) / 2;
	printf("Com as notas %.1f e %.1f, o aluno tem média %.1f.\n", nota1, nota2, media);
	printf("A sua situação é %s.\n", (media>=7)?"APROVADO":"REPROVADO");
}
