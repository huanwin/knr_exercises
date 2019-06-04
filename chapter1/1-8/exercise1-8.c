#include <assert.h>
#include <stdio.h>

#define TAB				(0x9)
#define BACKSPACE		(0x8)
#define BRACKET_LEFT	(0x3C)
#define BRACKET_RIGHT	(0x3E)
#define DASH			(0x2D)

int main()
{
	assert(EOF == -1);

	int character;

	while ( (character = getchar()) != EOF)
	{
		if (character == TAB)
		{
			putchar(BRACKET_RIGHT);
			putchar(BACKSPACE);
			putchar(DASH);
		}
		else if (character == BACKSPACE)
		{
			putchar(BRACKET_LEFT);
			putchar(BACKSPACE); 
			putchar(DASH);
		}
		else 
		{
			putchar(character);
		}
	}
	return 0;
}
