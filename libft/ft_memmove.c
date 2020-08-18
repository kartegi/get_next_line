/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktennie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 16:32:31 by ktennie           #+#    #+#             */
/*   Updated: 2019/09/27 15:02:56 by ktennie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t i;

	i = 0;
	if (src == NULL && dst == NULL)
		return (NULL);
	while (i < n)
	{
		if (dst > src)
		{
			((unsigned char*)dst)[n - 1] = ((unsigned char*)src)[n - 1];
			n--;
		}
		else
		{
			((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
			i++;
		}
	}
	return (dst);
}
