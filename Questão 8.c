#include <stdio.h>
//Ler 2 n�meros inteiros do teclado (A e B), verificar e imprimir qual deles � o maior, ou a mensagem "A=B" caso sejam iguais.

int main(){
	int A, B;
	
	printf("Digite um valor para A: ");
	scanf("%d", &A);
	printf("Digite um valor para B: ");
	scanf("%d", &B);
	
	
	if(A > B){
		printf("%d e o maior numero", A);
	}else{
		if(A < B){
		printf("%d e o maior numero", B);
		}
		if(A == B){
		printf("os numeros sao iguais");
		}
	}
return 0;
}
