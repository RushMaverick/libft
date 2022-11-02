#include "../libft.h"

int	main(void)
{
	#pragma region ft_isalpha test
		printf("%d", ft_isalpha('t'));
		printf("%d", ft_isalpha('2'));
		printf("%d", ft_isalpha('B'));
		printf("%d", ft_isalpha('a'));
	#pragma endregion

	#pragma region ft_isascii test
		printf("%d", ft_isascii(0));
		printf("%d", ft_isascii(128));
	#pragma endregion

	#pragma region ft_isdigit test
		printf("%d", ft_isdigit('a'));
		printf("%d", ft_isdigit('1'));
		printf("%d", ft_isdigit('.'));
	#pragma endregion

	#pragma region ft_isprint test
		printf("%d", ft_isprint(0));
		printf("%d", ft_isprint(32));
		printf("%d", ft_isprint(126));
		printf("%d", ft_isprint(127));
	#pragma endregion

	#pragma region ft_isalnum test
		printf("%d", ft_isalnum('a'));
		printf("%d", ft_isalnum('2'));
		printf("%d", ft_isalnum('B'));
		printf("%d", ft_isalnum('!'));
	#pragma endregion

	#pragma region ft_memset test
		char str[] = "Raiding is a fun hobby";
		puts(str);
		ft_memset(str, '-', 5);
		puts(str);
	#pragma endregion
	
	#pragma region ft_bzero test
		char str[] = "Raiding is a fun hobby";
		puts(str);
		ft_memset(str, '0', 5);
		puts(str);
	#pragma endregion

	#pragma region ft_memcpy test
		char arr[40] = {'\0'};
		char str[] = "Oh my days";
		puts(arr);
		puts("/n");
		ft_memcpy(arr, str, 4);
		puts(arr);
	#pragma endregion

	#pragma region ft_strlcpy test
		char str1[] = "Good";
		char str2[] = "Test";
		printf("str1 is: %s", str1);
		puts("\n");
		printf("str2 is: %s", str2);
		puts("\n");
		printf("this is srcLen: %zu", strlcpy(str1, str2, 1));
		puts("\n");
		printf("str1 is: %s", str1);
		puts("\n");
		printf("str2 is: %s", str2);
	#pragma endregion

	#pragma region ft_memmove test
		char	arr[5];
		char	*str = "Test";
		puts(arr);
		puts("/n");
		ft_memmove(arr, str, 5);
		puts(arr);
	#pragma endregion

	return (0);
}