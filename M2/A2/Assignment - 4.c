#include <stdio.h>
#define MAXLINE 100

#define YES 1
#define NO 0

int getline(char s[], int lim) {
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
	{
		/* code */
		s[i] = c;
	}
	if (c == '\n')
	{
		/* code */
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

int htoi(char s[]) {
	int hexdigit, i, inhexadecimal, n;
	i = 0;
	if (s[i] == '0')
	{
		/* code */
		++i;
		if (s[i] == 'x' || s[i] == 'X')
		{
			/* code */
			++i;
		}
	}
	n = 0;
	inhexadecimal = YES;

	for (; inhexadecimal == YES; ++i)
	{
		/* code */
		if (s[i] >= '0' && s[i] <= '9')
		{
			/* code */
			hexdigit = s[i] - '0';
		}
		else if (s[i] >= 'a' && s[i] <= 'f')
		{
			/* code */
			hexdigit = s[i] - 'a' + 10;
		}
		else if (s[i] >= 'A' && s[i] <= 'F')
		{
			/* code */
			hexdigit = s[i] - 'A' + 10;
		}
		else {
			inhexadecimal = NO;
		}

		if (inhexadecimal == YES)
		{
			/* code */
			n = 16 * n + hexdigit;
		}
	}
	return n;
}

int main(int argc, char const *argv[])
{
	/* code */
	char line[MAXLINE];
	int value;
	getline(line, MAXLINE);
	value = htoi(line);
	printf("The value of %s is %d", line, value);
	return 0;
}