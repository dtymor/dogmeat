#include "libft.h"

char **ft_split(char *s, char c)
{
	char			*dst;
	unsigned int	total;
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	total = ft_strlen(s);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			len++;
		i++;
	}
	if (!(dst = (char*)malloc(sizeof(*s) * (total + len))))
		return (NULL);
	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		dst[len] = s[i];
		if (s[i] == c)
		{
			len++;
			dst[len] = '\n';
		}
		len++;
		i++;
	}
	dst[len - 1] = '\0';
	return ((char **) dst);
}
