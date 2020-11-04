#include <unistd.h>
#include <stdio.h>

size_t ft_strlen(const char *s);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);

int main()
{
	char *a = "";
	char *b = "Hello";
	
//	printf("otvet '3' = %zu", ft_strlen("abc"));
	
	printf("%zu", ft_strlcpy(a, b, 1));
	return (0);
}
