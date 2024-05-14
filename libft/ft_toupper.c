char	ft_toupper(unsigned char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

#include <stdio.h>
int	main()
{
	char	c;
	c = 'a';
	printf("%c", ft_toupper(c));
}
