#include<stdio.h>

int ft_str_is_uppercase(char *str);

int	main(void)
{
	char	str1[2] = {};
	char	str2[6] = {"z"};
	char	str3[6] = {"HELLO"};
	printf("%d\n", ft_str_is_uppercase(str1));
	printf("%d\n", ft_str_is_uppercase(str2));
	printf("%d\n", ft_str_is_uppercase(str3));
}