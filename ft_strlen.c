
#include "libft.h"

int 	ft_strlen(char const *str)
{
	int i;

	i = 0;
	while(*str++)
	{
		i++;
	}
	return (i);
}