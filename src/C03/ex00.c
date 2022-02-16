#include <string.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
    char a[] = "teste!";
    char b[] = "teste";
    
    int k = ft_strcmp(a, b);
    printf("%d\n", k);
    return (0);
}