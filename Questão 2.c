#include <stdio.h>
int main(){
	int n1, n2, n3, media;
	
	printf("Digite a nota da primeira unidade: ");
	scanf("%d", &n1);
	printf("Digite a nota da segunda unidade: ");
	scanf("%d", &n2);
	printf("Digite a nota da terceira unidade: ");
	scanf("%d", &n3);
	media = (n1+n2+n3)/3;

	if (n1<3 || n2<3 || n3<3){
		printf("O aluno está em recuperação");
	}else{
		if(media >= 3 && media < 5){
			printf("O aluno está em recuperação");
		}
		if(media>=5){
			printf("O aluno esta aprovado");
		}
	}
	

	return 0;
}
