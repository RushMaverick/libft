/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:32:50 by rrask             #+#    #+#             */
/*   Updated: 2022/11/09 16:29:46 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int res;
	int	sign;
	int	i;

	res = 0;
	sign = 1;
	i = 0;
	if (!str)
		return (0);
	while (str[i] >= 0 && str[i] <= 32)
			i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (sign * res);
}

int	main(void)
{
	char *str1;
	char *str2;
	
	str1 = " 2 $";
	str2 = " 2 $";
	ft_atoi(str1);
	atoi(str2);
	printf("My Atoi: %d \n", ft_atoi(str1));
	printf("OG Atoi: %d \n", atoi(str2));
	return (0);
}


// Convert string to integer
// Parses the C-string str interpreting its content as an integral number, which is returned as a value of type int.

// The function first discards as many whitespace characters (as in isspace) as necessary until the first non-whitespace character is found.
//Then, starting from this character, takes an optional initial plus or minus sign followed by as many base-10 digits as possible, and interprets them as a numerical value.

// The string can contain additional characters after those that form the integral number, which are ignored and have no effect on the behavior of this function.

// If the first sequence of non-whitespace characters in str is not a valid integral number, or if no such sequence exists because either str is empty or it contains only whitespace characters,
//no conversion is performed and zero is returned.

// Return Value
// On success, the function returns the converted integral number as an int value.
// If the converted value would be out of the range of representable values by an int, it causes undefined behavior. See strtol for a more robust cross-platform alternative when this is a possibility.