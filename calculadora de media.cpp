#include<stdio.h>


int idade;
float altura;
char genero,nome[40],apelido[20];

int main() {    

printf("Digite sua idade\n");
scanf("%d",&idade);

printf("digite sua altura\n");
scanf("%f",&altura);    

printf("Digite seu genero\n");
scanf(" %c",&genero);  ////armazena 1 letra

printf("Digite seu nome\n");
scanf(" [^\n]",&nome);  //armazena 1 frase

printf("Digite seu apelido com apenas uma palavra\n");
scanf("%s",&apelido);  //armazena 1 palavra

//comando de saida
printf("\nNome %s, apelido %s, genero %c\n",nome,apelido,genero);
printf("altura %.2f, idade %d",altura,idade);

return 0;
}
