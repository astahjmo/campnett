#include <stdio.h>

int ft_is_prime(int nb);

int		main(void)
{
	printf("-10 = %d (0)\n", ft_is_prime(-10));
	printf("-1 = %d (0)\n", ft_is_prime(-1));
	printf(" 0 = %d (0)\n", ft_is_prime(0));
	printf(" 11 = %d (1)\n", ft_is_prime(11));	
}