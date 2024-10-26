/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcelilog <bcelilog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:34:45 by bcelilog          #+#    #+#             */
/*   Updated: 2024/10/22 17:46:25 by bcelilog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
