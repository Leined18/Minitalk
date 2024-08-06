/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:27:44 by danpalac          #+#    #+#             */
/*   Updated: 2024/07/13 17:35:31 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*find_start(char *str, const char *delim)
{
	while (*str && ft_strchr(delim, *str))
		str++;
	if (*str == '\0')
		return (NULL);
	return (str);
}

static char	*find_end(char *str, const char *delim)
{
	while (*str && !ft_strchr(delim, *str))
		str++;
	return (str);
}

char	*ft_strtok(char *str, const char *delim)
{
	static char	*static_str;
	char		*start;
	char		*end;

	if (str)
		static_str = str;
	if (!static_str)
		return (NULL);
	start = find_start(static_str, delim);
	if (!start)
	{
		static_str = NULL;
		return (NULL);
	}
	end = find_end(start, delim);
	if (*end)
	{
		*end = '\0';
		static_str = end + 1;
	}
	else
		static_str = NULL;
	return (start);
}
