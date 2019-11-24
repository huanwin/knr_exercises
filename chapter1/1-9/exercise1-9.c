#include <stdio.h>

int main() 
{
	int curr_c, prev_c; 
	prev_c = 0;
	while ( (curr_c = getchar()) != EOF)
	{
		if (curr_c == ' ')
		{
			if (prev_c != ' ')
			{
				putchar(curr_c);
			}
		}
		else
		{
			putchar(curr_c);
		}
		prev_c = curr_c;
	}
	return 0;
}
