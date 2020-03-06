/*
 * Rewrite the temperature conversion program of Section 1.2 to use a function
 * for conversion.
 * 
 * Using e1-3.c as the starting point here.
 */

#include <stdio.h>

float convertFtoC(float df);

// print Fahrenheit->Celsius table for f = 0, 20, ..., 300
int main()
{
	// Print the heading for the table
	printf("Fahrenheit to Celsius Conversion Table\n");
	printf("======================================\n");

	// Calculate and print the table
	float lower, upper, step, fahr, cels;

	lower = 0.0;	// lower bound of table
	upper = 300.0;	// upper bound of table
	step = 20.0;	// step size between bounds

	// Start at the lower bound and iterate through, calling the conversion
	// function instead of manually calculating it inside the loop
	fahr = lower;
	while (fahr <= upper)
	{
		cels = convertFtoC(fahr);
		printf("%4.0f %6.1f\n", fahr, cels);
		fahr += step;
	}
	
	return 0;
}

/* Converts Fahrenheit to Celsius
 *
 * In:
 *   - df:  degrees (F) to convert to (C)
 */
float convertFtoC(float df)
{
	return (5.0/9.0) * (fahr - 32.0);
}
