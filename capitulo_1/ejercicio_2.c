#include <stdio.h>

int main (int argc, char * argv[])
{
	if (argc != 3)
	{
		fprintf (stderr, "%s\n", "Error: La cantidad de argumentos esperada es 3");
		return 1;
	}
	printf ("%s%s\t%s\n", "Feliz año ", argv[1], argv[2]);
	return 0;
}

/*
	argv[0] -> ./ejercicio_2
	argv[1] -> 2026
	argv[2] -> Buenos Aires
*/
