/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 16:05:43 by bazuara           #+#    #+#             */
/*   Updated: 2020/08/05 08:44:23 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

int		ft_newline(char *str)
{
	if (!str)
		return (0);
	while (*str)
	{
		if (*str == '\n')
			return (1);
		str++;
	}
	return (0);
}

char	*ft_strnjoin(char *s1, char *s2, int read_file)
{
	char	*dst;
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	if (!(dst = ft_calloc(sizeof(char), (ft_strlen(s1) + read_file + 1))))
		return (NULL);
	if (s1)
	{
		while (i < ft_strlen(s1))
		{
			dst[i] = s1[i];
			i++;
		}
		free(s1);
		s1 = NULL;
	}
	while (j < read_file)
	{
		dst[i + j] = s2[j];
		j++;
	}
	dst[i + j] = '\0';
	return (dst);
}

int		ft_check_gnl(char **buf, char **str, int read_file, char **line)
{
	int	n;

	n = 0;
	if ((n = ft_newline(*str)) == 1 || (read_file == 0 && (*str && **str)))
	{
		if (buf && *buf && n == 1)
			free(*buf);
		if (line && *line)
			free(*line);
		*line = ft_substr(*str, 0, ft_strlen(*str));
		*str = ft_substr(*str, ft_strlen(*line) + 1, ft_strlen(*str));
		if (n == 1)
			return (1);
		else
			return (0);
	}
	return (0);
}

int		get_next_line(int fd, char **line)
{
	static char	*str = NULL;
	int			read_file;
	char		*buf;

	if (BUFFER_SIZE == 0 || fd == -1 || !line ||
	!(buf = ft_calloc(sizeof(char), (BUFFER_SIZE + 1))))
		return (-1);
	*line = ft_calloc(1, sizeof(char));
	read_file = 1;
	while (read_file > 0 || (read_file == 0 && (str && *str)))
	{
		if (ft_check_gnl(&buf, &str, read_file, line) == 1)
			return (1);
		if ((read_file = read(fd, buf, BUFFER_SIZE)) == -1)
		{
			free(buf);
			return (-1);
		}
		if (read_file != 0)
			str = ft_strnjoin(str, buf, read_file);
	}
	((str)) ? free(str) : 0;
	free(buf);
	str = NULL;
	return (0);
}
