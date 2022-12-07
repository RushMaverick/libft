#include "libft.h"
#include <stdio.h>

static int	wordcount(char const *s, char c) //word count
{
	int count;
	int i;
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

char *writeuntilc(const char *s, int c)
{
	int i;
	char *temp;

	i = 0;
	temp = (char*)s;
	while (*s != c && s[i])
	{
		s++;
		i++;
	}
	temp = ft_substr(temp, 0, ft_strlen(temp) - ft_strlen(s));
	return (temp);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	int		j;
	char	**strarr;

	j = 0;
	strarr = 0;
	if (!s || !*s)
		return (NULL);
	if (!c)
		return ((char **)s);
	count = wordcount(s, c);
		//Count represents the number of words/strings we need to allocate for.
	strarr = (char **)malloc(sizeof(char *) * (count) + 1);
	if (!strarr)
		return (NULL);
	while (j < count) // This could be done inside writeuntilc
	{
		// while (*s != c)
		// 	s++;
		strarr[j] = writeuntilc(s, c);
		j++;
	}
	return (strarr);
}

int	main(void)
{
	char	*str;
	char	**res;
	char	c;

	str = "Split at space";
	c = ' ';
	res = ft_split(str, c);
	printf("%s\n", res[0]);
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