#include <stdlib.h>
#include<stdio.h>
#include "operations.h"
int addition(int n1, int n2)
    {
    printf("addition\n");
	int resultat = n1 + n2;
	printf("Le résultat est %d\n", resultat);
    return 0;
    }
    int soustraction(int n1, int n2)
    {
	printf("soustraction\n");
	int resultat = n1 - n2;
	printf("Le résultat est %d\n", resultat);
    return 0;
    }
    int multiplication(int n1, int n2)
    {
    printf("multiplication\n");
	int resultat = n1 * n2;
    printf("Le résultat %d\n", resultat);
    return 0;
    }
    int division(int n1, int n2)
    {
    printf("division\n");
	if(n1 == 0 || n2 == 0)
	{
	    printf("Opération impossible.\n");
	}
    else
	{
		int resultat = n1 / n2;
        printf("Le résultat est %d\n", resultat);
	}
    return 0;
    }
    int modulo(int n1, int n2)
    {
    printf("modulo\n");
	if(n1 == 0 || n2 == 0)
	{
		printf("Opération impossible.\n");
        return 0;
	}
	else
	{
		int resultat = n1 % n2;
       	printf("Le résultat %d\n", resultat);
        return 0;
	}
}