/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktennie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 10:39:15 by ktennie           #+#    #+#             */
/*   Updated: 2019/10/03 15:55:27 by ktennie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwd(char const *s, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[0] != c)
			j++;
		while (s[i] == c && s[i] != '\0')
		{
			i++;
			if (s[i] != c)
				j++;
		}
		i++;
	}
	return (j);
}

static int	ft_len(const char *s, char c)
{
	int j;

	j = 0;
	while (s[j] != c && s[j] != '\0')
	{
		j++;
	}
	return (j);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		arri;
	char	**arr;

	if (s == NULL)
		return (NULL);
	arr = (char**)malloc(sizeof(char*) * (ft_countwd(s, c) + 1));
	if (arr == NULL)
		return (NULL);
	i = 0;
	arri = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			arr[arri] = ft_strnew(ft_len(&s[i], c));
			ft_strncpy(arr[arri], &((char*)s)[i], ft_len(&s[i], c));
			arri++;
			i = i + ft_len(&s[i], c) - 1;
		}
		i++;
	}
	arr[arri] = NULL;
	return (arr);
}
