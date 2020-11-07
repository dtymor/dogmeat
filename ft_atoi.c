#include <stdio.h>
#include <stdlib.h>

int     ft_atoi(char *str)
{
	int i;
	int negative;
	int res;

	i = 0;
	res = 0;
	negative = 1;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\n' || str[i] ==
	'\t' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
	{
			i++;
	}
	if (str[i] == '-')
	{
		negative = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * negative);
}

/*int 	main() {
		char *str[10] = {"   1223456"};
		printf("%d \n%d", ft_atoi(*str), atoi(*str));
		return 0;
} */



