#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	int end;
	int start;
	char *trimmed;

	i = 0;
	end = ft_strlen(s1);
	start = 0;
	while (ft_strchr(set, (int)s1[start]))
		start++;
	while (ft_strchr(set, (int)s1[end]) && end > start)
		end--;
	trimmed = malloc(sizeof(char));
	if (!trimmed)
		return (NULL);
	return (trimmed);
}

int	main(void)
{
	char	*str1;
	char	*str2;
	char	*res;

	str1 = "AABAABBCCAA";
	str2 = "A";
	res = ft_strtrim(str1, str2);
	printf("%s\n", res);
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