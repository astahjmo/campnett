#include <string.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
   char str1[15];
   char str2[15];
   int ret;

   strcpy(str1, "abcdef");
   strcpy(str2, "abcdef");
   ret = strncmp(str1, str2, 15);

   if(ret < 0) {
      printf("1 é menor que 2");
   } else if(ret > 0) {
      printf("2 é menor que 1");
   } else {
      printf("Ambos são iguais");
   }
   return(0);
}