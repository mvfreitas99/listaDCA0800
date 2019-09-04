#include <stdio.h>
/*Ler dois valores do teclado na forma de números reais, calcular e imprimir na tela:
A soma destes valores
O produto deles
O quociente entre eles
*/
int main(){
	float x, y, soma, produto, quociente;
	
	printf("Digite um valor para x: ");
	scanf("%f", &x);
	printf("Digite um valor para y: ");
	scanf("%f", &y);
	soma = x+y;
	produto = x*y;
	quociente= x/y;
	
	printf("%.2f+%.2f=%.2f \n", x, y, soma);
	printf("%.2f*%.2f=%.2f \n", x, y, produto);
	printf("%.2f/%.2f=%.2f", x, y, quociente);
	
	
	
	
	return 0;
}
