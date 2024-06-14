#include "libft.h"

static int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		len;

	len = ft_len(n);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if(!num)
		return (NULL);
	num[len--] = '\0';
	if (n == 0)
		num[0] = 0;
	if (n < 0)
	{
		n = n * -1;
		num[0] = '-';
	}
	while (n) 
	{
		num[len] = 48 + (n % 10);
		n = n / 10;
		len--;
	}
	return (num);
}