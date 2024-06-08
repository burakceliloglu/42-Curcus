#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (dst);
	if (src > dst)
		return (ft_memcpy(dst, src, len));
	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	while (len--)
		d[len] = s[len];
	return (dst);
}