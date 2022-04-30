#include<stdio.h>

float salario,aumento,novosalario;

int main () {
	
printf("Digite seu salario atual\n");
scanf("%f",&salario);

aumento=(salario*0.25);	//processamento
novosalario=(salario+aumento);

printf("Seu novo salario e: %.2f\n",novosalario);

return 0;
	
}
