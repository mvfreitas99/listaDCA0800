#include <stdio.h>

int main(){
	float latao, zinco, cobre;
	
	printf("Qual a quantidade de latao em kg? ");
	scanf("%f", &latao);
	
	zinco = (latao*0.3);
	cobre = (latao*0.7);
	
	printf("voce vai precisar de %.2fkg de cobre e %.2fkg de zinco", cobre, zinco);
	
	return 0;
}
