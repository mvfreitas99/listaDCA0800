#include <stdio.h>
#include <math.h>
int main(){
	int a, b, c, delta;
	float x1,x2;
	
	printf("Qual o valor de a? ");
	scanf("%d", &a);
	printf("Qual o valor de b? ");
	scanf("%d", &b);
	printf("Qual o valor de c? ");
	scanf("%d", &c);
	
	printf("%dx² + %dx + %d = 0\n", a, b, c);
	delta = (b*b)-(4*a*c);
	
	if(delta >= 0){
	x1 = (-b+sqrt(delta))/2*a;
	x2 = (-b-sqrt(delta))/2*a;
	printf("x1 = %f \nx2 = %f", x1, x2);
	}else{
		printf("Delta negativo!");
	}
	
	
	
	return 0;
}
