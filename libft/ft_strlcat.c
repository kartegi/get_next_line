/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktennie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:56:05 by ktennie           #+#    #+#             */
/*   Updated: 2019/09/22 17:46:59 by ktennie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t dst_s;

	dst_s = ft_strlen(dst);
	i = ft_strlen(dst);
	j = 0;
	if (i >= size)
		return (ft_strlen((char*)src) + size);
	while (src[j] != '\0' && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (dst_s < size)
		dst[i] = '\0';
	return (dst_s + ft_strlen((char*)src));
}
