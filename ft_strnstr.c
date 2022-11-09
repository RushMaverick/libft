/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:28:31 by rrask             #+#    #+#             */
/*   Updated: 2022/11/09 10:34:52 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ptr;

	ptr = ft_strlen(needle);
	if (needle == "")
		return (haystack);
	if (!needle)
		return (NULL);
	//Code here
	return (ptr);
}

int	main(void)
{
	char *str1;
	char *str2;

	str1 = "No rest for the wicked.";
	str2 = "rest";
	printf("The word is: %s\n", ft_strnstr(str1, str2, 24));
	return (0);
}

//      The strnstr() function locates the first occurrence of the null-terminated string needle in the string haystack, where not more than len characters are searched.  Characters that appear after a
//      `\0' character are not searched.  Since the strnstr() function is a FreeBSD specific API, it should only be used when portability is not a concern.

//      While the strcasestr() function uses the current locale, the strcasestr_l() function may be passed a locale directly. See xlocale(3) for more information.

// RETURN VALUES
//      If needle is an empty string, haystack is returned; if needle occurs nowhere in haystack, NULL is returned; otherwise a pointer to the first character of the first occurrence of needle is
//      returned.

// EXAMPLES
//      The following sets the pointer ptr to the "Bar Baz" portion of largestring:

//            const char *largestring = "Foo Bar Baz";
//            const char *smallstring = "Bar";
//            char *ptr;

//            ptr = strstr(largestring, smallstring);

//      The following sets the pointer ptr to NULL, because only the first 4 characters of largestring are searched:

//            const char *largestring = "Foo Bar Baz";
//            const char *smallstring = "Bar";
//            char *ptr;

//            ptr = strnstr(largestring, smallstring, 4);