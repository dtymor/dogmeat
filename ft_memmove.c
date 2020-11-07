#include "libft.h"

void					*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*ptr;
	const unsigned char	*ptr2;

	if (src == dst)
		return (dst);
	ptr = (unsigned char*)dst;
	ptr2 = (unsigned char*)src;
	i = 0;
	if (ptr2 < ptr)
		while (++i <= len)
			ptr[len - i] = ptr2[len - i];
	else
		while (len-- > 0)
			*(ptr++) = *(ptr2++);
	return (dst);
}


/*
int 	main()
{
	char *str[] = {"memmove может оказаться полезной функцией.............."};
	char *str2[10] = {"1234."};
	char *str3[7] = {"1234567"};
//	ft_memmove (str2, str3, 3);
//	printf("%s\n", *str2);
//	memmove (str2, str3, 3);
	printf("%s", *str2);
	return 0;
}*/
