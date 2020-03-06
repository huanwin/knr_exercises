/*
 * Write a programr to print a histogram of the lengths of words in its input.
 * It is easy to draw the histogram with the bars horizontal; a vertical 
 * orientation is more challenging.
 *
 * I had just read Jack Ganssle's blog post about commenting before writing
 * code, hence the massive commenting in this file. 
 */

#include <stdio.h>

#define IN  1
#define OUT 0

int main()
{
	// Need an array, each element corresponds to the count of words with
	// ((index of element) + 1) number of characters. E.g. word_count[0] is
	// the number of words with 1 letter.
	// Just use 10 slots, for 1- to 11-letter words.
	// Longer words will be discarded. 
	int word_count[10] = { 0 };
	// Count number of characters
	int num_chars = 0;
	// Store the input in 'c'
	char c = 0;
	// Use a state variable to track whether inside a word or not.
	int state = OUT;
	// Use while loop to get characters, until EOF is input.
	while (EOF != c)
	{
		// Get characters. If a space, newline, or tab is input, then consider
		// that the end of a word. Increment the word_count array.
		// Else, if the state is OUT, set state as IN, and start a new word.
		// (See end of file for detail on this)
		// Also need to count the number of characters. If starting a new word,
		// reset the count to 0, and increment the count inside the array
		// whose elements represent the number of words with that correspond-
		// ing number of characters.
		// Else increment the number of characters.
		c = getchar();
		if ( c == '\n' || c == ' ' || c == '\t')
		{
			state = OUT;
			if ( num_chars >= 1 && num_chars <= 11)
			{
				// Align the number with the corresponding index in the array
				--num_chars; 
				word_count[num_chars] += 1;
			}
		}
		else if (OUT == state)
		{
			state = IN;
			// Start at 1 because a character has been entered, to get to this
			// block.
			num_chars = 1;
		}
		else
		{
			++num_chars;
		}
	} // end while get input

	// Print the histogram. Loop over the array, printing out the number of
	// chars, and a pound sign for each word with that count.
	printf("<letters> <bar>\n");
	for (int i = 0; i < 10; ++i)
	{
		if (i < 9)
		{
			printf(" %d", i+1);
		}
		else 
		{
			printf("%d", i+1);
		}
		printf(" ");
		for (int j = 0; j < word_count[i]; ++j)
		{
			printf("#");
		}
		printf("\n");
	} // end loop over array
	printf("\n");

	return 0;
}

/* Want to start words on non-blank input instead of on blank input, because
 * there are edge cases that the program can wrongly interpret as a word.
 * E.g. the first input being a blank input. If num_words is incremented in the 
 * if (blank input) block, then that would wrongly count as a word.
 */
