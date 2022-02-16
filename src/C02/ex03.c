#include<stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	str1[2] = {};
	char	str2[6] = {"1"};
	char	str3[6] = {"He11o"};
	printf("%d\n", ft_str_is_numeric(str1));
	printf("%d\n", ft_str_is_numeric(str2));
	printf("%d\n", ft_str_is_numeric(str3));
}