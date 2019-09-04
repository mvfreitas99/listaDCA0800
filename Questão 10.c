#include <stdio.h>
/*Ler a velocidade máxima permitida em uma avenida e a velocidade com que o motorista estava dirigindo nela 
e calcule a multa que uma pessoa vai receber, sabendo que são pagos:
50 reais se o motorista estiver ultrapassar em até 10km/h a velocidade permitida (ex.: velocidade máxima: 50km/h; motorista a 60km/h ou a 56km/h);
100 reais, se o motorista ultrapassar de 11 a 30 km/h a velocidade permitida.
200 reais, se estiver acima de 31km/h da velocidade permitida
*/

int main(){
	int vMax, vMotorista;
	
	printf("Qual a velocidade maxima permitida? ");
	scanf("%d", &vMax);
	printf("Qual a velocidade do motorista? ");
	scanf("%d", &vMotorista);
	
	if(vMotorista > vMax && vMotorista <= (vMax + 10)){
		printf("a multa sera de 50 reais");
	}else{
		if(vMotorista > (vMax+11) && vMotorista <= (vMax + 30)){
			printf("a multa sera de 100 reais");
		}
		if(vMotorista > (vMax + 31)){
			printf("a multa sera de 200 reais");
		}
	}
	
	
	
return 0;
}
