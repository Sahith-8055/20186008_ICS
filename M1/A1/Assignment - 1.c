#include <stdio.h>
#define NONBLANK '-'

int main(int argc, char const *argv[])
{
	/* code */
	int c;
	int lastc;
	lastc = NONBLANK;

	while((c = getchar()) != EOF) {
		if (c == ' ')
		{
			/* code */
			if (lastc != ' ')
			{
				/* code */
				putchar(c);
			}
		}
		else {
			putchar(c);
		}
		lastc = c;
	}
	return 0;
}