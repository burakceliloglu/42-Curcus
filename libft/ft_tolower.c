int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

#include <stdio.h>
int	main()
{
	char c = 'A';
	printf("%c", ft_tolower(c));
}
