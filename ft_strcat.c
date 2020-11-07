#include "libft.h"

int		ft_strcat(char *dst, char *src, int size)
{
	int	i;
	int	len;

	len = ft_strlen(dst) + ft_strlen(src);
	if (size <= ft_strlen(dst))
		return (ft_strlen(src) + size);
	while (*dst)
		dst++;
	i = 0;
	while ((i < size - (len - ft_strlen(src)) - 1) && *src)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

/*
int 	main(void)
{
	char *dst[10] = {"i love"};
	char *src[5] = {"you"};
//	ft_strcat(*dst, *src, 15);
	strcat(*dst, *src);
	printf("%s", *dst);
}*/
