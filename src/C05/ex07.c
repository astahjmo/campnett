#include <stdio.h>

int		ft_find_next_prime(int nb);

int		main(void)
{
	printf("-10 = %d (2)\n", ft_find_next_prime(-10));
	printf(" 0 = %d (2)\n", ft_find_next_prime(0));
	printf(" 10 = %d (11)\n", ft_find_next_prime(10));
	printf(" 11 = %d (11)\n", ft_find_next_prime(11));	
}