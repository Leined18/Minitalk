/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 08:23:00 by danpalac          #+#    #+#             */
/*   Updated: 2024/10/07 17:13:08 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"

char	*print_and_free(char *message)
{
	ft_putstr_fd(message, 1);
	free(message);
	return (NULL);
}

void	ft_handler(int signum)
{
	static char	c = 0x00;
	static int	bits = 0;
	static char	*message = 0;

	if (signum == SIGUSR1)
		c &= ~(0x80 >> bits);
	else if (signum == SIGUSR2)
		c |= 0x80 >> bits;
	if (++bits == 8)
	{
		if (c)
			message = ft_straddc(message, c);
		else
			message = print_and_free(message);
		bits = 0;
		c = 0x00;
	}
}

int	main(void)
{
	signal(SIGUSR1, ft_handler);
	signal(SIGUSR2, ft_handler);
	ft_putstr_color_fd(GREEN, "PID: ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putstr_fd("\n", 1);
	while (1)
		pause();
}
