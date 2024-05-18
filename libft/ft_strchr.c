char    *ft_strchr(const char *s, int c)
{
	unsigned char	a;

	a = c;
	while (*s != '\0')
	{
		if (a == *s)
			return ((char *) s);
		s++;
	}
	if (a == '\0')
		return ((char *) s);
	return (0);
}

#include "libft.h"
int	main()
{
	printf("%s", ft_strchr("Burak", 'j'));
}