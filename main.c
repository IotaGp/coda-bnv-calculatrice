#include <stdlib.h>
#include <stdio.h>
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
		printf("addition\n");
	}
	else if(ope == '-')
	{
		printf("soustraction\n");
	}
	else if(ope == '*')
	{
		printf("multiplication\n");
	}
	else if(ope == '/')
	{
		printf("division\n");
	}
	else if(ope == '%')
	{
		printf("modulo\n");
	}
	else
	{
		printf("Opérateur non reconnu\n");
	}
exit(0);
}
