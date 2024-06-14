#include <stdio.h>

int main(void)
{
	//Déclaration et affectation d'une variable de type entier (int)
	int nombre_entier = 95;
        float autre_nombre = 165.26;
		
	/*
	    %d : nombre entier (int)
	    %f : nombre flottant (float)
	    %c : caractère (char)
	    %s : chaîne de caractères (texte)
	*/

	printf("The number is %d\n and %f\n", nombre_entier, autre_nombre);

	return 0;
}
