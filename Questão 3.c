#include <stdio.h>
//Calcular a quantidade dinheiro gasta por um fumante. Dados: o n�mero de anos que ele fuma, o n� de cigarros fumados por dia e o pre�o de uma carteira.
// totalDinheiro = valorCigarro * numeroCigarros * dias
int main(){
	float valorCarteira, totalDinheiro, valorCigarro;
	float anos, numeroCigarros, dias;
	
	printf("Qual e o valor da carteira de cigarro? ");
	scanf("%f", &valorCarteira);
	printf("h� quantos anos ele fuma? ");
	scanf("%f", &anos);
	printf("Quantos cigarros ele fuma por dia? ");
	scanf("%f", &numeroCigarros);
	
	valorCigarro = (valorCarteira/20);
	dias = anos*365;
	
	totalDinheiro = valorCigarro * numeroCigarros * dias;
	
	printf("O total gasto pelo fumante, foi de %.2f reais", totalDinheiro);
	
	return 0;
}
