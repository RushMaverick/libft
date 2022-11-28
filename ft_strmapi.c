/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:34:39 by rrask             #+#    #+#             */
/*   Updated: 2022/11/28 13:57:06 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	int len;
	char *temp;

	i = 0;
	len = ft_strlen(s);
	temp = malloc(sizeof(char) * len + 1);
	if (!s)
		return (NULL);
	if (!f)
		return ((char *)s);
	if (!temp)
		return (NULL);
	while (len > 0)
	{
		temp[i] = f(i, s[i]);
		i++;
		len--;
	}
	temp[i] = '\0';
	return (temp);
}

// int	main(void)
// {
// 	char *str1;
// 	char *res;
	
// 	str1 = "What is my function?";
// 	res = ft_strmapi(str1, (1, *str1));
// 	return (0);
// }

// Parameters s: The string on which to iterate.
// f: The function to apply to each character.
// Return value The string created from the successive applications
// of ’f’.
// Returns NULL if the allocation fails.
// External functs. malloc
// Description Applies the function ’f’ to each character of the
// string ’s’, and passing its index as first argument
// to create a new string (with malloc(3)) 