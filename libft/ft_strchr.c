char    *ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if ((char) c == *s)
			return ((char *) s);
		s++;
	}
	if ((char) c == '\0')
		return ((char *) s);
	return (0);
}

#include "libft.h"
int	main()
{
	printf("%s", ft_strchr("Burak", 'j'));
}