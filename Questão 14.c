#include <stdio.h>

int main(){
	int n1, n2, n3;
	
	printf("Qual o primeiro numero? ");
	scanf("%d", &n1);
	printf("Qual o segundo numero? ");
	scanf("%d", &n2);
	printf("Qual o terceiro numero? ");
	scanf("%d", &n3);
	
	if(n1>n2 && n1>n3){
		if(n2>n3){
			printf("%d > %d > %d", n1, n2, n3);
		}else{
			if(n3>n2){
				printf("%d > %d > %d", n1, n3, n2);
			}
		}
	}else{
		if(n2>n1 && n2>n3){
			if(n1>n3){
				printf("%d > %d > %d", n2, n1, n3);
			}else{
				if(n3>n1){
					printf("%d > %d > %d", n2, n3, n1);
				}
			}
			
		}
		if(n3>n1 && n3>n2){
			if(n1>n2){
				printf("%d > %d > %d", n3, n1, n2);
			}
			if(n2>n1){
				printf("%d > %d > %d", n3, n2, n1);
			}
		}
	}



	return 0;
}
