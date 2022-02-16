#include <stdio.h>

int		ft_sqrt(int index);

int		main(void)
{
	printf("-10 = %d (0)\n", ft_sqrt(-10));
	printf("-1 = %d (0)\n", ft_sqrt(-1));
	printf(" 0 = %d (0)\n", ft_sqrt(0));
	printf(" 16 = %d (4)\n", ft_sqrt(16));
}