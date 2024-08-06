/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:27:04 by danpalac          #+#    #+#             */
/*   Updated: 2024/07/12 13:48:30 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_error(char *err, int fd)
{
	ft_putstr_fd("\x1b[31mError\x1b[0m\n", fd);
	if (err && *err)
	{
		ft_putstr_fd(err, fd);
		write(fd, "\n", 1);
	}
	exit(EXIT_FAILURE);
}
