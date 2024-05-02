#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	float temperature_value;

	printf("Temperature value: ");

	if (scanf("%f", &temperature_value) == 0)
	{
		printf("Wrong format inputted.\nPlease input a number.\n");
		exit(EXIT_FAILURE);
	}
	
	float temperature_celsius = 5 * (temperature_value - 32) / 9.0;
	float temperature_fahrenheit = temperature_value * (9.0 / 5) + 32;

	printf("%.2f degrees Celsius = %.2f degrees Fahrenheit\n",
			temperature_value, temperature_fahrenheit);
	printf("%.2f degrees Fahrenheit = %.2f degrees Celsius\n",
			temperature_value, temperature_celsius);

	exit(EXIT_SUCCESS);
}
