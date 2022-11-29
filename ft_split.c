#include "libft.h"

char **ft_split(char const *s, char c)
{
	int i;
	int count;
	int len;
	char *temp[50];
	char **strarr;

	if (!s || !*s)
		return (NULL);
	if (!c)
		return ((char *)s);
	i = 0;
	count = 0;
	//A function that counts the occurence of c. 
	// Use that count to malloc a **strarr.
	// so on
}

int main(void)
{
	char *str;
	char **res;
	char c;

	str = "Split at space";
	c = ' ';
	res = ft_split(str, c);
	printf("%s\n", res);
	return (0);
}

// Parameters s: The string to be split.
// c: The delimiter character.
// Return value The array of new strings resulting from the split.
// NULL if the allocation fails.
// External functs. malloc, free
// Description Allocates (with malloc(3)) and returns an array
// of strings obtained by splitting ’s’ using the
// character ’c’ as a delimiter. The array must end
// with a NULL pointer.