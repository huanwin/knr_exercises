#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for f = 0, 20, ..., 300 */
int main()
{
	// Print the heading for the table
	printf("======================================\n");
	printf("Fahrenheit to Celsius Conversion Table\n"); 
	printf("======================================\n");

	// Calculate and print the table 
	int lower, upper, step;
	float fahr, cels;
	
	lower = 0;		// lower limit of temperature table
	upper = 300;	// upper limit
	step = 20;		// step size

	fahr = lower;
	while (fahr <= upper)
	{
		cels = (5.0/9.0) * (fahr-32.0);
		printf("%4.0f %6.1f\n", fahr, cels);
		fahr = fahr + step;
	}

	return 0;
}
