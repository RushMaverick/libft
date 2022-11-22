#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int 	j;
	char	*joined;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	joined = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!joined)
		return (NULL);
	while (s1[i] != '\0')
	{
		joined[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		joined[j] = s2[i];
		i++;
		j++;
	}
	joined[j] = '\0';
	return (joined);

}
