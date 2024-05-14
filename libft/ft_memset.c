#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*arr;

	i = 0;
	arr = b;
	while (i < len)
	{
		arr[i] = c;
		i++;
	}
	return (b);
}

#include <stdio.h>
int	main()
{
	char b[30] = "Bilgisayar";
	ft_memset(b, 'x', 5);
	printf("%s", b);
}

