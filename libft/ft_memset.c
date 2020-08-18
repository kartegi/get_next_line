/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktennie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 12:36:35 by ktennie           #+#    #+#             */
/*   Updated: 2019/09/22 17:37:29 by ktennie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		((unsigned char*)ptr)[i] = (unsigned char)x;
		i++;
	}
	return (ptr);
}
