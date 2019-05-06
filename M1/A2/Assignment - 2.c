#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

void reverseString(char* str) {
	int l = strlen(str);
	char *begin_pointer, *end_pointer, ch;

	begin_pointer = str;
	end_pointer = str;

	for (int i = 0; i < l - 1; ++i)
	{
		/* code */
		end_pointer++;
	}
	for (int i = 0; i < l / 2; ++i)
	{
		/* code */
		ch = *end_pointer;
		*end_pointer = *begin_pointer;
		*begin_pointer = ch;

		begin_pointer++;
		end_pointer--;
	}
}

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

int main(int argc, char const *argv[])
{
	/* code */
	int len;
	char s[MAXLINE];
	while((len = getline(s, MAXLINE)) > 0)
	{
		reverseString(s);
		printf("%s\n", s);
	}
	return 0;
}
