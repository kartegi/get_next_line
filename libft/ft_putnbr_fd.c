/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktennie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 14:53:01 by ktennie           #+#    #+#             */
/*   Updated: 2019/09/27 15:35:09 by ktennie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_print_fd(int n, int fd)
{
	if (n > 0)
	{
		ft_print_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
}

void			ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	c;

	i = 0;
	c = '\0';
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	if (n < 0 && n != -2147483648)
	{
		n = n * -1;
		c = '-';
	}
	if (c == '-')
	{
		ft_putchar_fd('-', fd);
		c = '\0';
	}
	if (n == 0)
		ft_putchar_fd('0', fd);
	if (n > 0)
		ft_print_fd(n, fd);
}
