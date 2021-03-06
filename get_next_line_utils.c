/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <nfranco-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 16:46:13 by nfranco-          #+#    #+#             */
/*   Updated: 2020/06/08 22:05:37 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	free_and_return_null(char **s)
{
	if (*s && s)
	{
		free(*s);
		*s = NULL;
	}
}

int		ft_strlen_gnl(char *s)
{
	int i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

int		is_there_line(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

int		find_char_index(char *s, char c, char d)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c || s[i] == d)
			return (i);
		i++;
	}
	return (-11);
}
