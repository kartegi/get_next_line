/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktennie <ktennie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 10:48:55 by ktennie           #+#    #+#             */
/*   Updated: 2019/11/17 16:54:30 by ktennie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		find_n(char **text, char **line)
{
	char	*n;
	char	*tmp;

	if ((n = ft_strchr(*text, '\n')))
	{
		*n = '\0';
		if ((*line = ft_strdup(*text)) == NULL)
			return (-1);
		tmp = *text;
		if ((*text = ft_strdup(++n)) == NULL)
			return (-1);
		free(tmp);
		if ((*text)[0] == '\0')
			ft_strdel(text);
	}
	else
	{
		if ((*line = ft_strdup(*text)) == NULL)
			return (-1);
		ft_strdel(text);
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	int				count;
	static	char	*text[OPEN_MAX];
	char			buf[BUFF_SIZE + 1];
	char			*tmp;

	if (fd < 0 || line == NULL)
		return (-1);
	while ((count = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[count] = '\0';
		if (text[fd] == NULL)
			if ((text[fd] = ft_strnew(1)) == NULL)
				return (-1);
		tmp = text[fd];
		if ((text[fd] = ft_strjoin(text[fd], buf)) == NULL)
			return (-1);
		free(tmp);
		if (ft_strchr(text[fd], '\n'))
			break ;
	}
	if (count < 0)
		return (-1);
	else if (count == 0 && text[fd] == NULL)
		return (0);
	return (find_n(&text[fd], line));
}
