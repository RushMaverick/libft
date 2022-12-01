#include "libft.h"

static int wordcount(char const *s, char c) //word count
{
	int		count;
	int		i;
	i = 0;
	count = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}


static char **applytoarr(char **strarr, char const *s, char c)
{
	char *temp;

	while (strarr)
	{
		// Move pointer from strarr using strarr vs int i. 
		temp = ft_strdup(s);
		free(temp);
		strarr++;
	}
	return (strarr);
}

char **ft_split(char const *s, char c)
{
	int count;
	// int len;
	char **strarr;

	if (!s || !*s)
		return (NULL);
	if (!c)
		return ((char **)s);
	count = wordcount(s, c); //Count represents the number of words/strings we need to allocate for.
	strarr = (char **)malloc(sizeof(char) + (count + 1));
	strarr[count] = '\0';
	applytoarr(strarr, s, c);
	return (strarr);
}

int main(void)
{
	char *str;
	char **res;
	char c;

	str = "Split at space";
	c = ' ';
	res = ft_split(str, c);
	printf("%s\n", *res);
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