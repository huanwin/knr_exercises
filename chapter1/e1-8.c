/*
 * Write a program to count blanks, tabs, and newlines.
 *
 * 20191123 This is the exercise that caused the switch from the first edition
 * to the second, baed on this [StackOverflow](http://stackoverflow.com/questions/22866705/the-c-programming-language-1st-edition-exercise-1-8-cant-get-arrow-to-app).
 */

#include <stdio.h>

int main()
{
	// Declare counting variables, initialize to a known state
	int num_tabs, num_blanks, num_lines, character;
	num_tabs = 0;
	num_blanks = 0;
	num_lines = 0;

	while ( (character = getchar()) != EOF)
	{
		if (character == '\t')
		{
			++num_tabs;
		}
		else if (character == '\n')
		{
			++num_lines;
		}
		else if (character == ' ')
		{
			++num_blanks;
		}
		putchar(character);
	}
	printf("\nTabs: %d, newlines: %d, blanks (spaces): %d\n",
			num_tabs, num_lines, num_blanks);
	return 0;
}
