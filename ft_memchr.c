#include <stdio.h>

void * 				ft_memchr( const void * str, int n, size_t len)
{

	unsigned char	*ptr;
	unsigned char	c2;
	int 			i;

	i = 0;
	ptr = (unsigned char *)str;
	c2 = (unsigned char)n;
	while (len--)
	{
		if (ptr[i] == c2)
			return (ptr + i);
		i++;
	}
	return (NULL);
}