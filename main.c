#include <stdlib.h>
#include <stdio.h>
int main()
{
	char ope[10];
	int nombre1;
	int nombre2;
	printf("Bonjour, choisissez un opérateur entre + - / * et % : ");
	scanf("%c", ope);
	printf("Choisissez deux nombres : ");
	scanf("%d", nombre1);
	scanf("%d", nombre2);
	exit(0);
}
