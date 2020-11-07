
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dst;
	unsigned int	i;

	i = 0;
	if (!(dst = (char*)malloc(sizeof(*s) * (len + 1))))
		return (NULL);

	while (i < len && s[start] != '\0')
	{
		dst[i] = s[start];
		i++;
		start++;

	}
	return ((char *)dst);
}
