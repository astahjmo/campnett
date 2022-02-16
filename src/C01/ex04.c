#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
    int a;
    int b;
    
    a=4;
    b=2;
    printf ("%d\n", a);
    printf ("%d\n", b);
    ft_ultimate_div_mod(&a, &b);
    printf ("%d\n", a);
    printf ("%d\n", b);
}