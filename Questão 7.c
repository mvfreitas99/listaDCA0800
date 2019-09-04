#include <stdio.h>
//Ler 3 números reais do teclado e verificar se o primeiro é maior que a soma dos outros dois.

int main(){
	float x, y, z, soma;
	
	printf("Digite um valor para x: ");
	scanf("%f", &x);
	printf("Digite um valor para y: ");
	scanf("%f", &y);
	printf("Digite um valor para z: ");
	scanf("%f", &z);
	soma = y+z;
	
	if (x > soma){
		printf("o numéro %.2f e maior que a soma de %.2f com %.2f", x, y, z);
	}else{
		if(x<soma){
			printf("o numéro %.2f e menor que a soma de %.2f com %.2f", x, y, z);
		}
		if(x == soma){
			printf("o numéro %.2f e igual que a soma de %.2f com %.2f", x, y, z);

		}
	}
	
	
return 0;
}
