/*
 * Experiment to find out what happens when printf's argument string contains
 * \c, where c is some character not listed above [e.g. \n].
 */

#include <stdio.h>

int main ()
{
	printf("Using escape sequence: \\y \n");
	printf("\y");
	printf("Using escape sequence: \\p \n");
	printf("\p");
	return 0;
}
