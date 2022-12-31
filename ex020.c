#include <stdio.h>
#include <locale.h>
void main(){
	setlocale(LC_ALL, "portuguese");
	printf("\n-------- Tabela de Preço --------\n");
	printf("Viagem até 200km\tR$0,50/km\n");
	printf("Viagens acima de 200km\tR$0,35/km\n");
	printf("-----------------------------------\n");
	float km, preco, total;
	printf("Distancia total da viagem em (KM): ");
	fflush(stdin);
	scanf("%f", &km);
	if(km <= 200){
		preco = 0.50;
	}else{
		preco = 0.35;
	}
	total = km * preco;
	printf("Uma viagem de %.1fkm vai custar R$%.2f.\n", km, preco);
	printf("Valor total: R$%.2f\n", total);
	printf("---------------------------\n");
}
