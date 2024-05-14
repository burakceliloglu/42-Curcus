#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int	i;

	i = 0;
	if (!dst && !src)	
		return (NULL);
	while ( i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

#include <stdio.h>
int	main()
{
	char	dst[20] = "Burakho";
	char	src[20] = "Celiloğlu";
	ft_memcpy(dst, src, 5);
	printf("%s", dst);
}
