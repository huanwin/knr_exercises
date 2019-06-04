#include <assert.h>
#include <stdio.h>

int main()
{
	assert(EOF == -1);

	int currChar;
    char prevChar;
	// Initialize to known value, as it will first be used before being set
	prevChar = '0';
	while( (currChar = getchar()) != EOF)
	{
		if (prevChar != ' ')
		{
			putchar(currChar);
		}
		prevChar = (char) currChar;
	}

	return 0;
}
