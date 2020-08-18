/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktennie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 16:48:11 by ktennie           #+#    #+#             */
/*   Updated: 2019/09/27 15:26:24 by ktennie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*nstr;

	if (s == NULL)
		return (NULL);
	nstr = ft_strnew(ft_strlen((char*)s));
	if (nstr == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		nstr[i] = f(s[i]);
		i++;
	}
	return (nstr);
}
