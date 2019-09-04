#include <stdio.h>
//Ler dois números inteiros, x e y, e imprimir o quociente e o resto da divisão inteira entre eles.
int main(){
	int x, y;
	
	printf("Digite um valor para x: ");
	scanf("%d", &x);
	printf("Digite um valor para y: ");
	scanf("%d", &y);
	
	printf("o quociente de %d/%d e %d: ", x, y, (x/y));
	printf("o resto da divisão %d/%d e: %d ", x, y, (x%y));
return 0;
}
