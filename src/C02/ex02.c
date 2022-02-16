#include<stdio.h>

int ft_str_is_alpha(char *str);

int	main(void)
{
	char	str1[2] = {};
	char	str2[6] = {"z"};
	char	str3[6] = {"He11o"};
	printf("%d\n", ft_str_is_alpha(str1));
	printf("%d\n", ft_str_is_alpha(str2));
	printf("%d\n", ft_str_is_alpha(str3));
}