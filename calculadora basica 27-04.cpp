#include <stdio.h>

float n1,n2;
char op;

int main (){
printf("Digite o primeiro numero\n");
scanf("%f",&n1);
printf("\nDigite o operador: + - * /\n");
scanf(" %c",&op);//espa�o antes do %c pois � um bug
printf("Digite o segundo numero\n");
scanf("%f",&n2);

switch(op){
	case '+':
		printf("\nO resultado da soma e %.f\n",n1+n2);
	break;	
	
	case '-':
		printf("\nO resultado da subtracao e %.f\n",n1-n2);
	break;
	
	case '*':	
		printf("\nO resultado da multiplicacao e %.f\n",n1*n2);
	break;

	case '/':
		if(n2 !=0)	{ //para evitar do usuario digitar 0 no n2
			printf("\nO resultado da multiplicacao e %.f\n",n1/n2);
		}
		else{
			printf("\nNao existe divisao por zero\n");			
		}
	break;	
	default:
		printf("\nVoce digitou o operador invalido\nDigitar apenas os seguintes caracteres + - * /");
}//switch
	
return 0;	
}
