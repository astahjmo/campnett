#include <string.h>
#include <stdio.h>

char *ft_strncat(char *dest, char *src);

int main(void)
{
	char a[] = "abcdef";
	char b[] = "ghijklmnopqrstuvwxyz\n";
	printf ("%s", ft_strncat(a, b));
	return (0);
}