#include "libft.h"

static int inputlen(int n)
{
	int len;

	len = 0;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len + 1);
	

}

char *ft_itoa(int n)
{
	char *nbr;
	int	len;

	len = inputlen(n);
	printf("%d\n", len);
	nbr = malloc(sizeof(char) * len);
	
	
	inputlen(n % 10);
	inputlen(n / 10);
	
	return (nbr);
}

int	main(void)
{
	int n;
	char *res;

	n = 455;

	res = ft_itoa(n);
	return (0);

}

// Parameters n: the integer to convert.
// Return value The string representing the integer.
// NULL if the allocation fails.
// External functs. malloc
// Description Allocates (with malloc(3)) and returns a string
// representing the integer received as an argument.
// Negative numbers must be handled.