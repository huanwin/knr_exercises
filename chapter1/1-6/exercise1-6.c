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

