/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:11:47 by rrask             #+#    #+#             */
/*   Updated: 2022/11/02 17:31:32 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

int	main(void)
{
	printf("%d", ft_isprint(0));
	printf("%d", ft_isprint(32));
	printf("%d", ft_isprint(126));
	printf("%d", ft_isprint(127));
}
