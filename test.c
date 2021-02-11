#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nb = 0;
	unsigned int ull = 0;
	char c = 'c';
	char str[] = "jules";

	printf("-c = |%-9c|\n", c);
	printf("-str = |%9.7s|\n", str);
	printf("-pointer = |%18p|\n", &str);
	printf("-int = |%+-9.6i| ou |%+9.6d|\n", nb, nb);
	printf("-unsigned = |%9.6u|\n", ull);
	printf("-hexa = |%9.6x|\n", nb);
	printf("-HEXA = |%9.6X|\n", nb);
	printf("-%% = |%-+9.6%|\n");
}