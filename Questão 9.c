#include <stdio.h>
/*Gerar o preço de um carro ao consumidor e os valores pagos pelo imposto e pelo lucro do distribuidor, 
sabendo o custo de fábrica do carro e que são pagos: 
a) de imposto: 45% sobre o custo do carro; 
b) de lucro do distribuidor: 12% sobre o custo do carro.
*/

int main(){
	float valorFabrica, imposto, lucro, valorTotal;
	
	printf("Qual e o valor de fabrica do carro? ");
	scanf ("%f", &valorFabrica);
	
	imposto = valorFabrica * 0.45;
	lucro = valorFabrica * 0.12;
	valorTotal = valorFabrica +imposto + lucro;
	printf("imposto: %.3f reais\nLucro do distribuidor: %.3f reais\n", imposto, lucro);
	printf("O valor do carro para o consumidor e %.3f reais", valorTotal);
	
	
	
return 0;
}
