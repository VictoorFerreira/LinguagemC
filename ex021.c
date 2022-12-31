#include <stdio.h>
#include <locale.h>
void main(){
	setlocale (LC_ALL, "portuguese");
	float num, res;
	//entrada de dados
	printf("Digite um numero (positivo ou negativo): ");
	fflush(stdin);
	scanf("%f", &num);
	//verificador de calculos
	if(num > 0){
		res = 1 / num;
		printf("O inverso de %.0f é igual a %.4f\n", num, res);
	}else{
		res = num * (-1);
		printf("O oposto de %.0f é igual a %.0f\n", num, res);
	}
}
