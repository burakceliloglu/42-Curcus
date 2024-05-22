#include "libft.h"

int	ft_atoi(const char *str)
{
	int	parity;
	int	number;

	parity = 1;
	number = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		parity = -1;
		str++;
	}
	while (*str == '+' || *str == '-')
		str++;
	while (ft_isdigit(*str))
	{
		number = number * 10 + (*str - '0');
		str++;
	}
	return (number * parity);
}
