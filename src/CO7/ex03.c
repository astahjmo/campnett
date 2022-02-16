#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int		main(void)
{
	int		offset;
	char	**strs;
	char	*res_str;

	strs = malloc(3 * sizeof(char *));
	if (strs == NULL)
		return (1);
	offset = 0;
	while (offset < 3)
	{
		strs[offset] = "abc";
		offset++;
	}
	int i = 0;
	printf("before:\t");
	while (i < 3)
	{
		printf("{%s} ", strs[i]);
		i++;
	}
	printf("\n");
	res_str = ft_strjoin(3, strs, " # ");
	if (res_str == NULL)
		return (1);
	printf("after:\t'%s'\n", res_str);
	free(strs);
	free(res_str);
	return (0);
}