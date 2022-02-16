#include<stdio.h>
char	*ft_strupcase(char *str);

int	main(void)
{
	char x[] = "Teste";
	char y[] = "TESTE";
	char z[] = "teste";
	ft_strupcase(x);
	ft_strupcase(y);
	ft_strupcase(z);
	printf("%s\n", x);
	printf("%s\n", y);
	printf("%s\n", z);
}