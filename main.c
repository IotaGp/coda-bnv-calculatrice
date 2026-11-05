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
		int resultat = nombre1 + nombre2;
		printf("Le résultat est %d\n", resultat);
	}
	else if(ope == '-')
	{
		printf("soustraction\n");
		int resultat = nombre1 - nombre2;
		printf("Le résultat est %d\n", resultat);
	}
	else if(ope == '*')
	{
		printf("multiplication\n");
		int resultat = nombre1 * nombre2;
                printf("Le résultat %d\n", resultat);
	}
	else if(ope == '/')
	{
		printf("division\n");
		if(nombre1 == 0 || nombre2 == 0)
		{
			printf("Opération impossible.\n");
		}
		else
		{
			int resultat = nombre1 / nombre2;
                	printf("Le résultat est %d\n", resultat);
		}
	}
	else if(ope == '%')
	{
		printf("modulo\n");
		if(nombre1 == 0 || nombre2 == 0)
		{
			printf("Opération impossible.\n");
		}
		else
		{
			int resultat = nombre1 % nombre2;
                	printf("Le résultat %d\n", resultat);
		}
	}
	else
	{
		printf("Opérateur non reconnu\n");
	}
exit(0);
}
