#include <stdio.h>

int main(){
	int n1, n2;
	
	printf("Qual o primeiro numero? ");
	scanf("%d", &n1);
	printf("Qual o segundo numero? ");
	scanf("%d", &n2);
	
	if(n2!=0){
		printf("O quociente de %d por %d e: %d",n1,n2,(n1/n2));
	}
	else{
		printf("DIVISAO POR ZERO!");
	}
	
	return 0;
}
