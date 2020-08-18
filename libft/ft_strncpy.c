/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktennie <ktennie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 19:06:46 by ktennie           #+#    #+#             */
/*   Updated: 2019/09/22 18:09:07 by ktennie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (i < len)
	{
		if (src[j] != '\0')
		{
			dst[i] = src[i];
			j++;
		}
		else
			dst[i] = '\0';
		i++;
	}
	return (dst);
}
