#include <stdio.h>

int ft_recursive_power(int nb, int power);

int		main(void)
{
	printf("-3 ^-1 = %d (0)\n", ft_recursive_power(-3, -1));
	printf("-3 ^ 1 = %d (-3)\n", ft_recursive_power(-3, 1));
	printf(" 4 ^ 0 = %d (1)\n", ft_recursive_power(4, 0));
	printf(" 4 ^ 3 = %d (64)\n", ft_recursive_power(4, 3));
	
}