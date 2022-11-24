#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	if (!n)
		return ;
	if (n >= '0' && n <= '9')
		write(fd, &n, 1);
}

// int	main(void)
// {
// 	int n;

// 	n = 4;
// 	ft_putnbr_fd(n, 1);
// 	printf("%d\n", n);
// 	return (0);
// }

// Parameters n: The integer to output.
// fd: The file descriptor on which to write.
// Return value None
// External functs. write
// Description Outputs the integer ’n’ to the given file
// descriptor.