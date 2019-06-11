#include <assert.h>
#include <stdio.h>

int main()
{
	assert(EOF == -1);

	int character;

	while ( (character = getchar()) != EOF)
	{
		// On some terminals, the backspace deletes the character instead of
		// moving the cursor back and allowing the next character to write
		// over it. 
		// In this case, the order of the characters inside the printf
		// statements will at least show the brackets, which is more 
		// descriptive than a plain dash.

		if (character == '\t')
		{
			printf("-\b>");
		}
		else if (character == '\b')
		{
			printf("-\b<");
		}
		else 
		{
			putchar(character);
		}
	}
	return 0;
}
