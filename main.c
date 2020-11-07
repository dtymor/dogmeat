#include "libft.h"
#include <string.h>

int main()
{
	char str[15] = "hello world123";
	char ptr[10] = "world";
//	printf("%s", *str);
//	char str2[] = {"22121221"};
//	char str3[] = {"1234567"};
	printf("%s", ft_strnstr (str, ptr, 15));
//	printf("%s\n", *str2);
//	memmove (str2, str3, 3);
//	char g = '1';
//	printf("%s", str2);
//	int tr = 12345;
//	printf("\n%s", ft_itoa(tr));
	return 0;
}