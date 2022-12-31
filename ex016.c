#include <stdio.h>
#include <locale.h>
void main(){
	setlocale(LC_ALL, "Portuguese");
	float preco;
	printf("Qual foi o valor total das compras: R$");
	fflush(stdin);
	scanf("%f", &preco);
	printf("--------------------------------------\n");
	printf("Você comprou R$%.2f na nossa loja.\n", preco);
	if(preco >= 500){
		float desc = (preco * 10/100);
		float precofin = preco - desc;
		printf("=========== ATENÇÃO ==============\n");
		printf("Por fazer mais de R$ 500 em compras, você vai receber R$%.2f de desconto.\n", desc);
		printf("O valor total a ser pago será de R$%.2f.\n", precofin);
	}
	printf("Volte sempre!\n");
	printf("-----------\n");
}
