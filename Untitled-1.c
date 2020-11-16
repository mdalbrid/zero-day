#include <stdio.h>


void        *ft_memccpy(void *dest, const void *src, int c, size_t n);


   int main()
   {
    char b[] = "1,2,3,4,5,6,7,8,9";
    char c[100];
    ft_memccpy(&c, &b, 8, 20);
    printf("%s", c);
    return (0);
   }