/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 16:05:43 by bazuara           #+#    #+#             */
/*   Updated: 2021/07/13 11:58:29 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static void	ft_memdel(void **ap)
{
	if (ap != NULL)
	{
		free(*ap);
		*ap = NULL;
	}
}

static void	ft_strdel(char **as)
{
	if (as != NULL && *as != NULL)
		ft_memdel((void **)as);
}

static int	appendline(char **s, char **line)
{
	int		len;
	char	*tmp;

	len = 0;
	while ((*s)[len] != '\n' && (*s)[len] != '\0')
		len++;
	if ((*s)[len] == '\n')
	{
		*line = ft_substr(*s, 0, len);
		tmp = ft_strdup(&((*s)[len + 1]));
		free(*s);
		*s = tmp;
		if ((*s)[0] == '\0')
			ft_strdel(s);
	}
	else
	{
		*line = ft_strdup(*s);
		ft_strdel(s);
	}
	return (1);
}

static int	output(char **s, char **line, int ret, int fd)
{
	if (ret < 0)
		return (-1);
	else if (ret == 0 && s[fd] == NULL)
		return (0);
	else
		return (appendline(&s[fd], line));
}

int	get_next_line(const int fd, char **line)
{
	int			ret;
	static char	*s[4096];
	char		buff[BUFFER_SIZE + 1];
	char		*tmp;

	if (fd < 0 || line == NULL)
		return (-1);
	ret = read(fd, buff, BUFFER_SIZE);
	while (ret)
	{
		buff[ret] = '\0';
		if (s[fd] == NULL)
			s[fd] = ft_strdup(buff);
		else
		{
			tmp = ft_strjoin(s[fd], buff);
			free(s[fd]);
			s[fd] = tmp;
		}
		if (ft_strchr(s[fd], '\n'))
			break ;
		ret = read(fd, buff, BUFFER_SIZE);
	}
	return (output(s, line, ret, fd));
}
