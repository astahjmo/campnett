#include <stdio.h>

int		ft_iterative_factorial(int nb);

int		main(void)
{
	printf("-6 = %d (0)\n", ft_iterative_factorial(-6));
	printf(" 0 = %d (1)\n", ft_iterative_factorial(0));
	printf(" 1 = %d (1)\n", ft_iterative_factorial(1));
	printf(" 4 = %d (24)\n", ft_iterative_factorial(4));
}