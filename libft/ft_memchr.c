/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktennie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 17:32:01 by ktennie           #+#    #+#             */
/*   Updated: 2019/09/22 17:32:13 by ktennie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)c == ((unsigned char*)arr)[i])
		{
			return (&((unsigned char*)arr)[i]);
		}
		i++;
	}
	return (NULL);
}
