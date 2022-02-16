#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int		main(void)
{
	char str[6];
	char result[6];
	char ft_result[6];
	unsigned int return_int;

	str[0] = 'H';
	str[1] = 'E';
	str[2] = 'L';
	str[3] = 'L';
	str[4] = 'O';
	str[5] = '\0';
	printf("============strlcpy============\n");
	return_int = ft_strlcpy(result, str, 6);
	printf("source : %s, destination : %s, return : %d\n", str, result, return_int);
	printf("===========ft_strlcpy===========\n");
	return_int = ft_strlcpy(ft_result, str, 6);
	printf("source : %s, destination : %s, return : %d\n", str, ft_result, return_int);
	return (0);
}