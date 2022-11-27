#include "libft.h"


// static void test(int n)
// {
// 	int	len;
// 	int mod;
// 	long newn;
// 	char test;

// 	len = inputlen(n);
// 	mod = 0;
// 	newn = (long)n;
// 	if (newn == 0)
// 		write(1, "0", 1);
// 	if (newn < 0)
// 	{
// 		newn = newn * -1;
// 		write(1, "-", 1);
// 	}
// 	while (newn != 0)
// 	{
// 		mod = newn % 10;
// 		newn = newn / 10;
// 		test = mod + '0';
// 		write(1, &test, 1);
// 		len--;
// 	}
// }

// n % 10;
// n / 10;
// static void	ft_rec_itoa(long n)
// {
// 	if (tämä)
// 		ft_rec_itoa(n);
// 	n = n % 10;
// 	n = n / 10;
// }

static void	ft_test(long n)
{
	int c = (int)n + '0';
	write(1, &c, 1);
	if (n < 4)
		ft_test(4);
	// write(1, &c, 1);
}

void ft_putnbr_fd(int n, int fd)
{
	if (!n)
		return ;
	
	// ft_rec_itoa(n);
	n = 0;
	ft_test(n);
	if (fd)
		;
	// if (n >= '0' && n <= '9')
	// 	write(fd, &n, 1);
}

int	main(void)
{
	int n;

	n = 165;
	ft_putnbr_fd(n, 1);
	return (0);
}

// f2(1) = 1;
// f1(12) = 2;
// f0(123) = 3;