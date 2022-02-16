#include <stdio.h>

int		ft_fibonacci(int index);

int		main(void)
{
	printf("-10 = %d (-1)\n", ft_fibonacci(-10));
	printf(" 5 = %d (5)\n", ft_fibonacci(5));
	printf(" 6 = %d (8)\n", ft_fibonacci(6));
	printf(" 9 = %d (34)\n", ft_fibonacci(9));
	
}