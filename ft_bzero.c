/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:10:34 by rrask             #+#    #+#             */
/*   Updated: 2022/10/28 12:00:02 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <strings.h>

/*void	ft_bzero(void *s, size_t n)
{
	
}*/

int	main(void)
{
	char	*str[43];

	*str = "Crocodile hunting is a sport for the rich.";
	printf("Display of buffer before bzero: %s", *str);
	printf("\n");
	bzero(str, 1);
	printf("Display of buffer after bzero: %s", *str);
	return (0);
}
