#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main(void){
    int str[5]={1,2,3,4,5};
    int i;
    
    i=0;
    while (i<5){
        printf ("%d", str[i]);
        i++;
    }
    ft_rev_int_tab(str, 5);
    i=0;
    printf ("\n");
    while (i<5){
        printf ("%d", str[i]);
        i++;
    }
    printf ("\n");
    return(0);
}