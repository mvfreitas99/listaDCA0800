#include <stdio.h>

int main(){
	int ano;
	
	printf("digite um ano: ");
	scanf("%d", &ano);
	
	
	if(ano%400==0 || (ano%4==0 && ano%100!=0)){
		printf("E um ano bissexto");
	}else{
		printf("Nao e um ano bissexto");
	}

	return 0;
}
