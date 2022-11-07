/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:08:06 by rrask             #+#    #+#             */
/*   Updated: 2022/11/07 13:20:09 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	if (s1[i] == '\0' || s2[i] == '\0')
		return ((unsigned int)i);
	while (n != 0 && (unsigned int)s1[i] == (unsigned int)s2[i])
	{
		i++;
		n--;
	}
	return ((unsigned int)*s1 - (unsigned int)*s2);
}

int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = " ";
	str2 = "-2";

	printf("Mine: %d \n", ft_strncmp(str1, str2, 4));
	printf("OG: %d", strncmp(str1, str2, 4));
	printf("\n");
	
	str1 = "a";
	str2 = "A";

	printf("Mine2: %d \n", ft_strncmp(str1, str2, 4));
	printf("OG2: %d", strncmp(str1, str2, 4));
	printf("\n");

	str1 = "A";
	str2 = "a";

	printf("Mine3: %d \n", ft_strncmp(str1, str2, 4));
	printf("OG3: %d", strncmp(str1, str2, 4));
	
	return (0);
}
