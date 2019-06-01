#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for f = 0, 20, ..., 300 */
int main()
{
	// Print the heading for the table
	printf("======================================\n");
	printf("Celsius to Fahrenheit Conversion Table\n"); 
	printf("======================================\n");

	// Calculate and print the table 
	int lower, upper, step;
	float fahr, cels;
	
	lower = 0;		// lower limit of temperature table
	upper = 100;	// upper limit
	step = 10;		// step size

	cels = lower;
	while (cels <= upper)
	{
		fahr = (cels * 1.8) + 32;
		printf("%3.0f %6.2f\n", cels, fahr);
		cels += step;
	}

	return 0;
}
