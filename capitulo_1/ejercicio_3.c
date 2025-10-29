#include <stdio.h>

int main (void)
{
	float celcius, fahrenheit;
	int fahrenheit_inicio, fahrenheit_final, fahrenheit_incremento;
	
	fahrenheit_inicio = 0;
	fahrenheit_final = 300;
	fahrenheit_incremento = 20;
	
	fahrenheit = fahrenheit_inicio;
	
	printf ("%s\t\t%s\n", "Fahrenheit", "Celsius");
	while (fahrenheit <= fahrenheit_final)
	{
		celcius = (float )5/9 * (fahrenheit - 32);
		printf ("%-12.2f\t\t%.3f\n", fahrenheit, celcius);
		fahrenheit = fahrenheit + fahrenheit_incremento;	
	}
	return 0;
}
