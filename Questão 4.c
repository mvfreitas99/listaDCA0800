#include <stdio.h>
//Ler dois n�meros inteiros, x e y, e imprimir o quociente e o resto da divis�o inteira entre eles.
int main(){
	int x, y;
	
	printf("Digite um valor para x: ");
	scanf("%d", &x);
	printf("Digite um valor para y: ");
	scanf("%d", &y);
	
	printf("o quociente de %d/%d e %d: ", x, y, (x/y));
	printf("o resto da divis�o %d/%d e: %d ", x, y, (x%y));
return 0;
}
