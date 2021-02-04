#include <stdio.h>

/*char	*ft_tohexa(unsigned long long adress)
{

}*/

int main()
{
	//char str[] = "WESH gangster !";
	//printf("|%6.4p|\n", &str);
	int nb = 42;
	long int pointer = (long int)&nb;
	printf("hexa = %p\n", &nb);
	printf("decimal = %ld\n", pointer);
}