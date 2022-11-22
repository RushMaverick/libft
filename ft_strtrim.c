#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;
	char *trimmed;

	i = 0;
	j = 0;
	trimmed = (char *)s1;
	while (s1[i] != '\0')
	{
		i++;
	}
	return (trimmed);
}

int	main(void)
{
	char	*str1;
	char	*str2;
	char	*res;

	str1 = "AABAABBCC";
	str2 = "AC";
	res = ft_strtrim(str1, str2);
	return (0);
}

// Parameters s1: The string to be trimmed.
// set: The reference set of characters to trim.
// Return value The trimmed string.
// NULL if the allocation fails.
// External functs. malloc
// Description Allocates (with malloc(3)) and returns a copy of
// ’s1’ with the characters specified in ’set’ removed
// from the beginning and the end of the string.