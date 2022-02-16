#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int        main(void)
{
	char str[] = "012340123456789";
	char to_find[] = "456";

    printf("%s\n", ft_strstr(str, to_find));
    printf("%s\n", strstr(str, to_find));
    return (0);
}