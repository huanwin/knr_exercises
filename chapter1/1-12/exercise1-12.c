/*
 * Write a program that prints its input one word per line.
 */

#include <stdio.h>

#define IN 1    // inside a word
#define OUT 0	// outside a word

// count lines, words, and characters in input
int main()
{
	int c, nl, nw, nc, state;
	state = OUT;
	nl = nw = nc = 0;
	while ( (c = getchar()) != EOF) {
		++nc;
		if (c == '\n')
		{
			++nl;
		}
		if (c == ' ' || c == '\n' || c == '\t')
		{
			state = OUT;
			if (c == '\n')
			{
				printf("\n");
			}
		}
		else if (state == OUT) 
		{
			state = IN;
			++nw;
		}
		if (c != '\n' && state == IN)
		{
			putchar(c);
		}
	}
	printf("Lines: %d, Words: %d, Chars: %d\n", nl, nw, nc);

	return 0;
}

