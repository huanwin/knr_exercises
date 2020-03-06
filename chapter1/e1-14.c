/*
 * Write a program to print the histogram of the frequencies of different
 * characters in its input.
 * (See end of file for some elaboration of my own on this exercise)
 */

#include <stdio.h>

#define MAX_VAL_BYTE 255

int main()
{
	// Store input character into 'c'.
	char c = 0;
	// quick n dirty implementation
	int count_array[MAX_VAL_BYTE] = { 0 };
	while (EOF != c) 
	{
		c = getchar();
		count_array[(int)c] += 1; // explicit conversion to silence warning
	}
	for (int i = 0; i < MAX_VAL_BYTE; ++i)
	{
		int num_counts = count_array[i];
		if (num_counts > 0)
		{
			printf("\n%c: ", i);
			for (int j = 0; j < num_counts; ++j)
			{
				printf("*");
			}
		}
	}
	printf("\n");
	return 0;
}

/* This program can be done simply by constraining the character set. E.g.
 * have an array of 26, 52, or 62, where each element is the occurrence of
 * 'a-z', 'a-z, A-Z', or 'a-z, A-Z, 0-9'. 
 *
 * It can also be done in a bit more complex or generalizable fashion. First
 * thought of mine here was to check each character as it comes in. If seeing
 * it for the first time, add it to a separate array to keep track of what
 * characters have been seen. Another array will keep track of the counts of
 * each of the characters in the 'seen characters' array.
 */

