#include <stdio.h>

int main(){
	int op, num1, num2;
	float ad, sub, mult, div;

	do{
	printf("\nDigite 1 para adicao\nDigite 2 para subtracao\nDigite 3 para multiplicacao\nDigite 4 para divisao\nDigite 5 para sair\n");
	printf("\nQual eh a opcao desejada?: ");
	scanf("%d", &op);
	
	
	
	if(op > 0 && op < 5){
	/*	for(int i = 0; i < 2; i++){
		printf("\nDigite o numero %d: ", i+1);
		scanf("%d", &num1);
		scanf(" %d", &num2);	
		}*/
		printf("\nDigite o numero 1: ", num1);
		scanf("%d", &num1);
		printf("\nDigite o numero 2: ", num2);
		scanf(" %d", &num2);
	}
	
	switch(op){
		case 1:
			ad = num1 + num2;
			printf("\nA soma eh: %0.2f\n", ad);
			break;
		case 2:
			sub = num1 - num2;
			printf("\nA subtracao eh: %0.2f\n", sub);
			break;
		case 3:
			mult = num1 * num2;
			printf("\nA multiplicacao eh: %0.2f\n", mult);
			break;
		case 4:
			div = num1 / num2;
			printf("\nA divisao eh: %0.2f\n", div);
			break;
		case 5:
			printf("\nJa to fechando, calma...\n");
			break;
		default:		//qualquer numero != de 1, 2, 3 ,4 e 5, volta ao menu
			printf("\nOpcao invalida, bobao. Tente outra vez: \n");
			break;
		}
	} while(op != 5);		//se for igual a 5, fecha
}