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
