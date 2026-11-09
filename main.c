#include <stdlib.h>
#include <stdio.h>
#include "operations.h"
int main()
{
	char ope;
	int nombre1;
	int nombre2;
	printf("Bonjour, choisissez un opérateur entre + - / * et %% : ");
	scanf("%c", &ope);
	printf("Choisissez deux nombres : ");
	scanf("%d", &nombre1);
	scanf("%d", &nombre2);
	if(ope == '+')
	{
		addition(nombre1, nombre2);
	}
	else if(ope == '-')
	{
		soustraction(nombre1, nombre2);
	}
	else if(ope == '*')
	{
		multiplication(nombre1, nombre2);
	}
	else if(ope == '/')
	{
		division(nombre1, nombre2);
	}
	else if(ope == '%')
	{
		modulo(nombre1, nombre2);
	}
	else
	{
		printf("Opérateur non reconnu\n");
	}
exit(0);
}
