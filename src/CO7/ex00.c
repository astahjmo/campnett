#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *str);

int		main(void)
{
	char	*str;
	char	*str_copy;

	str = "Testando";
	str_copy = ft_strdup(str);
	if (strcmp(str, str_copy) != 0)
		printf("KO\n");
	else
		printf("OK.\n");
	str = "";
	str_copy = ft_strdup(str);
	if (strcmp(str, str_copy) != 0)
		printf("KO\n");
	else
		printf("OK.\n");
	str = "Acabando o teste";
	str_copy = ft_strdup(str);
	if (strcmp(str, str_copy) != 0)
		printf("KO\n");
	else
		printf("OK.\n");
	return (0);
}