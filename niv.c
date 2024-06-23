#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int nombre = 0;
	int result;

	printf("Choisi un nombre entre 1 et 5 : ");
	scanf("%d", &nombre);

	printf("le nombre choisi est %d\n", nombre);

	
	nombre = nombre + 1;
	printf("Le nombre final est ... %d!\n", nombre);

	if (nombre >= 5)
	{
		printf ("U DIE HEHE \n");

	

	return (0);
	}
	if (nombre <= 5)
	{ 
		result = system("curl parrot.live");
		return (0);
	}

	
}
