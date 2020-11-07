
#include "libft.h"

void 	*ft_memcpy(void *str, const void *ptr, size_t len)
{
	unsigned char * std;
	unsigned char * ptd;

	std = (unsigned char *)str;
	ptd = (unsigned char *)ptr;
	if (!len || str == ptr)
		return (str);
	while (len--)
		*std++ = *ptd++;
	return (str);
}