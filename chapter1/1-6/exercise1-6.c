#include <assert.h>
#include <stdio.h>

int main()
{
	assert(EOF == -1); 

	int c, nb, nt, nn;

	nb = 0;
	nt = 0;
	nn = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
		{
			++nt;
		}
		else if (c == ' ')
		{
			++nb;
		}
		else if (c == '\n')
		{
			++nn;
		}
		putchar(c);
	}
	printf("\nBlanks: %d, tabs: %d, newlines %d\n\n", nb, nt, nn);
}

