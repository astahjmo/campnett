#include<stdio.h>

int ft_str_is_lowercase(char *str);

int	main(void)
{
	char	str1[2] = {};
	char	str2[6] = {"z"};
	char	str3[6] = {"Hello"};
	printf("%d\n", ft_str_is_lowercase(str1));
	printf("%d\n", ft_str_is_lowercase(str2));
	printf("%d\n", ft_str_is_lowercase(str3));
}