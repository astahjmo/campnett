#include <string.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
	char a[] = "abcdef";
	char b[] = "ghijklmnopqrstuvwxyz\n";
	printf ("%s", ft_strcat(a, b));
	return (0);
}