#include<stdio.h>

float salario,novosalario;

int main () {
	
printf("***CALCULAR NOVO SALARIO***\nDigite seu salario atual\n");
scanf("%f",&salario);

novosalario=(salario*0.25)+salario;	//processamento

printf("Seu novo salario e: %.2f\n",novosalario);

return 0;
	
}
