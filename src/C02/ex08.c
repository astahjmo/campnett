#include<stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char x[] = "Teste";
	char y[] = "TESTE";
	char z[] = "teste";
	ft_strlowcase(x);
	ft_strlowcase(y);
	ft_strlowcase(z);
	printf("%s\n", x);
	printf("%s\n", y);
	printf("%s\n", z);
}