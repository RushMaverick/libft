#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int 	j;
	char	*joined;

	i = 0;
	j = 0;
	joined = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!joined)
		return (NULL);
	while (s1[i] != '\0')
	{
		joined[j] = s1[i];
		i++;
	}
	while (s2[i] != '\0')
	{
		i = 0;
		joined[j] = s2[i];
		i++;
	}
	joined[j] = '\0';
	return (joined);

}

int		main(void)
{
	char	*str1;
	char	*str2;
	char	*res;

	str1 = "Fuuuusion-...";
	str1 = "...-Ha";
	res = ft_strjoin(str1, str2);
	printf("%s\n", res);
	free(res);
	return (0);
}

// Parameters s1: The prefix string.
// s2: The suffix string.
// Return value The new string.
// NULL if the allocation fails.
// External functs. malloc
// Description Allocates (with malloc(3)) and returns a new
// string, which is the result of the concatenation
// of ’s1’ and ’s2’.