/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:32:50 by rrask             #+#    #+#             */
/*   Updated: 2022/12/06 16:56:51 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	long	res;
	int		sign;

	res = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-')
		sign = -1;
	while (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		res = res * 10 + *str - '0';
		if (res * sign > INT_MAX)
			return (-1);
		else if (res * sign < INT_MIN)
			return (0);
		str++;
	}
	return ((int)res * sign);
}

// int main(void)
// {
// 	// char *str1 = "+  2";
// 	int res1;
// 	// int res2;
	
// 	res1 = ft_atoi(NULL);
// 	// res2 = atoi(NULL);
// 	printf("%d\n", res1);
// 	// printf("%d\n", res2);
// 	return (0);
// }