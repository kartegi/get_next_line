/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktennie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 16:50:19 by ktennie           #+#    #+#             */
/*   Updated: 2019/09/24 10:22:05 by ktennie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*nstr;

	if (s == NULL)
		return (NULL);
	nstr = ft_strnew(ft_strlen((char*)s));
	i = 0;
	while (s[i] && nstr != NULL)
	{
		nstr[i] = f(i, s[i]);
		i++;
	}
	return (nstr);
}
