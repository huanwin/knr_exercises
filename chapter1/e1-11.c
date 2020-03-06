/*
 *  The exercise asks, how would you test the word count program? What kinds of
 *  input are most likely to uncover bugs if there are any?
 *
 *  Sounds like we're building testing habits early, thankfully. My first 
 *  thought was to throw in some random text (press a couple keys, some of
 *  which are Enter) and then make sure the output corresponds with what I
 *  believe it should be.
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
		}
		else if (state == OUT) 
		{
			state = IN;
			++nw;
		}
	}
	printf("Lines: %d, Words: %d, Chars: %d\n", nl, nw, nc);

	return 0;
}

