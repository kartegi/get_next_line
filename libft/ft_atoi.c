/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktennie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 18:57:17 by ktennie           #+#    #+#             */
/*   Updated: 2019/09/27 15:22:31 by ktennie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int					i;
	long long int		val;
	int					minus;

	i = 0;
	val = 0;
	minus = 1;
	while (str[i] == '\t' || str[i] == '\r' || str[i] == '\f' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		val = (val * 10) + (str[i] - '0');
		i++;
	}
	val = val * minus;
	return (val);
}
