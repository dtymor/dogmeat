
#include "libft.h"

void	*ft_strdup(char *str)
{
	char			*dst;
	unsigned int	total;
	unsigned int	i;

	total = ft_strlen(str);
	if (!(dst = (char*)malloc(sizeof(*str) * (total + 1))))
		return (NULL);
	i = 0;
	while (i < total)
	{
		dst[i] = str[i];
		i++;
	}
	return ((void *)dst);
}