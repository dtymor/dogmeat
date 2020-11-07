#include "libft.h"

char 				*ft_strjoin(char *s1, char *s2)
{
	char			*dst;
	unsigned int	total;
	unsigned int	i;
	unsigned int	i1;

	i = 0;
	i1 = 0;
	total = ft_strlen(s1) + ft_strlen(s2);
	printf("%d\n", total);
	if (!(dst = (char*)malloc(sizeof(*s1) * (total + 1))))
		return (NULL);

	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	while (s2[i1])
	{
		dst[i] = s2[i1];
		i++;
		i1++;
	}
	dst[i] = '\0';
	printf("%d\n", total);
	return ((char *)dst);
}