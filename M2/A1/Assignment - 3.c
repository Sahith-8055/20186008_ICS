#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(int argc, char const *argv[])
{
	/* code */
	printf("char : %d :: %d\n", CHAR_MIN, CHAR_MAX);
	printf("int : %d :: %d\n", INT_MIN, INT_MAX);
	printf("long : %ld :: %ld\n", LONG_MIN, LONG_MAX);
	printf("float : %f :: %f\n", -FLT_MAX, FLT_MAX);
	printf("double : %g :: %g\n", -DBL_MAX, DBL_MAX);
	return 0;
}