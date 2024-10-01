#include<stdlib.h>
#include<stdio.h>
#include <time.h>

int main()
{
	int nb_donnee;
	int nb_générée = rand() % 100 + 1;
	srand(time(NULL));
	


	printf("Choisissez un nombre entre 1 et 100 :\n");
	scanf("%d", &nb_donnee);

	while(nb_donnee!=nb_générée)
	{
		if(nb_donnee>nb_générée)
		{
			printf("C'est moins !\n");
			printf("Choisissez un nombre entre 1 et 100 :\n");
			scanf("%d", &nb_donnee);
		}
		else
		{
			printf("C'est plus !\n");
			printf("Choisissez un nombre entre 1 et 100 :\n");
			scanf("%d", &nb_donnee);
		}
	}
	printf("Gagné !\n");
	exit(0);
}