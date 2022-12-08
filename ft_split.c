#include "libft.h"
#include <stdio.h>

static int	wordcount(char const *s, char c) //word count
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	printf("%d\n", count);
	return (count);
}

char	**writeuntilc(const char *s, int c, char **strarr)
{
	int		i;
	char	*begin;
	char	*end;

	// const char *start = s;
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		begin = (char *)s;
		while (*s && *s != c)
			s++;
		end = (char *)s;
		if (begin != end)
		{
			strarr[i++] = ft_substr(begin, 0, end - begin);
			if (!strarr)
				return (NULL);
		}
	}
	strarr[i] = NULL;
	return (strarr);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	int		j;
	char	**strarr;

	j = 0;
	strarr = 0;
	if (!s)
		return (0);
	count = wordcount(s, c);
	//Count represents the number of words/strings we need to allocate for.
	strarr = (char **)malloc(sizeof(char *) * (count) + 1);
	if (!strarr)
		return (NULL);
	writeuntilc(s, c, strarr);
	return (strarr);
}
