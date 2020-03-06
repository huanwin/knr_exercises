/*
 * Write a program to print the value of EOF.
 *
 * Sort of did this with exercise 1-6.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int c;
	while ((c = getchar()) != EOF)
	{
		printf("%d", c != EOF);
	}
	printf("\nValue of EOF: %d\n" ,c);
	return 0;
}

