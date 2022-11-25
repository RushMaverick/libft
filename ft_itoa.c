#include "libft.h"

char *ft_itoa(int n)
{
	char *convert;
	int sign;

	convert = (char *)malloc(sizeof(int) * n + 1);
	sign = 1;
	if (!convert)
		return (NULL);
	if (!n)
		return (NULL);
	if (n >= '0' && n <= '9')
		convert = n * sign - '0';
	return (convert);
}

int	main(void)
{
	int n;
	char *a;

	n = 4;
	a = ft_itoa(n);
	printf("%s\n", a);
	return (0);
}

// Parameters n: the integer to convert.
// Return value The string representing the integer.
// NULL if the allocation fails.
// External functs. malloc
// Description Allocates (with malloc(3)) and returns a string
// representing the integer received as an argument.
// Negative numbers must be handled.