#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	char *str;

	if (!(str = (char*)malloc(sizeof(*s) * ft_strlen(s))))
		return (NULL);
	while (*s++)
	{
		str[i] = f(i, *s);
	}
	return ((char*) str);
}