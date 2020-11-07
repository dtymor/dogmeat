
#include "libft.h"

int		ft_memcmp(const void *memptr1, const void *memptr2, size_t len)
{

	unsigned char	*ptr1;
	unsigned char	*ptr2;
	int 			i;

	i = 0;
	ptr1 = (unsigned char *)memptr1;
	ptr2 = (unsigned char *)memptr2;
	if (memptr1 == memptr2 || len == 0)
		return (0);
	while (len--)
	{
		if (ptr1[i] == ptr2[i])
			i++;
		else
			return (ptr1[i] - ptr2[i]);
	}
	return (0);
}