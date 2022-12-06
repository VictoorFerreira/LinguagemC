#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "portuguese");
	char produto[20];
	float preco, desc, novop;
	printf("Produto: ");
	fflush(stdin);
	gets(produto);
	printf("Preço de %s: R$", produto);
	fflush(stdin);
	scanf("%f", &preco);
	printf("Desconto: (%%) ");
	fflush(stdin);
	scanf("%f", &desc);
	novop = preco - (preco * desc / 100);
	printf("O produto %s custava R$%.2f.\n", produto, preco);
	printf("Porém, com %.2f%% de desconto, passa a custar R$%.2f.\n", desc, novop);
}
