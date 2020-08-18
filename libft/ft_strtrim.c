/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktennie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 16:54:42 by ktennie           #+#    #+#             */
/*   Updated: 2019/09/29 02:34:19 by ktennie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		len;
	char	*str;

	if (s == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen((char*)s) - 1;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i] != '\0')
	{
		i++;
	}
	while ((s[len] == ' ' || s[len] == '\t'
				|| s[len] == '\n') && len > i)
	{
		len--;
	}
	str = ft_strsub(s, i, len - i + 1);
	return (str);
}
