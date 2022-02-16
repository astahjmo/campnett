#include<stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	str1[2] = {};
	char	str2[6] = {"Ñ"};
	char	str3[6] = {"He11o"};
	printf("%d\n", ft_str_is_printable(str1));
	printf("%d\n", ft_str_is_printable(str2));
	printf("%d\n", ft_str_is_printable(str3));
}