#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size);

//void *ft_memset(void *b, int c, size_t len);

//size_t ft_strlen(const char *s);
//size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);

//int ft_toupper(int c);
//int ft_tolower(int c);

int main()
{
	char *a = "Hello";
	char *b = "World";
//	int c = 82;
//	int cc = 114;
	
	printf("%li \n", ft_strlcat(a, b, 4));
//	printf("%d \n", strlcat(a, b, 4));

	return (0);
	
//	printf("%zu", ft_strlcpy(a, b, 1);
//	printf("%s", ft_memset(a, 1, 3));

//	printf("toupper(82)-> %d \n" , ft_toupper(cc));
//	printf("tolower(114)-> %d \n" , ft_tolower(c));
}
