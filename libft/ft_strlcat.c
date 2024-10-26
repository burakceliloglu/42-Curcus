/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcelilog <bcelilog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:35:13 by bcelilog          #+#    #+#             */
/*   Updated: 2024/10/17 18:35:14 by bcelilog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (!(dstsize == 0 || dlen > dstsize))
	{
		i = 0;
		while (src[i] != '\0' && dlen + i < dstsize - 1)
		{
			dst[dlen + i] = src[i];
			i++;
		}
	}
	else
		return (slen + dstsize);
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
