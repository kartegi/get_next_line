/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktennie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 18:34:36 by ktennie           #+#    #+#             */
/*   Updated: 2019/09/27 20:54:07 by ktennie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_count(int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static	void	ft_gival(char *str, int n, int i)
{
	int j;

	j = 0;
	if (n < 0)
	{
		n = n * -1;
		str[0] = '-';
		j = 1;
	}
	while (i > j)
	{
		i--;
		str[i] = n % 10 + '0';
		n = n / 10;
	}
}

static	char	*ft_spccase(char *str)
{
	int		i;
	char	*spc;

	i = 0;
	while (str[i] != '\0')
		i++;
	spc = ft_strnew(i);
	i = 0;
	while (str[i] != '\0')
	{
		spc[i] = str[i];
		i++;
	}
	return (spc);
}

char			*ft_itoa(int n)
{
	int			i;
	char		*str;

	if (n == -2147483648)
	{
		return (ft_spccase("-2147483648"));
	}
	if (n == 0)
		return (ft_spccase("0"));
	i = ft_count(n);
	str = ft_strnew(i);
	if (str == NULL)
		return (NULL);
	ft_gival(str, n, i);
	return (str);
}
