/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcelilog <bcelilog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:34:41 by bcelilog          #+#    #+#             */
/*   Updated: 2024/10/22 17:47:38 by bcelilog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
