/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 20:22:46 by danpalac          #+#    #+#             */
/*   Updated: 2024/08/06 21:59:21 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"

static void	ft_handler(int signum);

int	main(void)
{
	ft_printf("Server PID: %u\n", getpid());
	while (1 == 1)
	{
		signal(SIGUSR1, ft_handler);
		signal(SIGUSR2, ft_handler);
		pause();
	}
	return (0);
}

static void	ft_handler(int signum)
{
	static t_server	server;

	if (signum == SIGUSR1)
		server.res = server.res << 1;
	else if (signum == SIGUSR2)
	{
		server.res = server.res << 1;
		server.res = server.res | 1;
	}
	server.count++;
	if (server.count == 8)
	{
		if (server.res == 0)
			exit(0);
		ft_printf("%c", server.res);
		server.count = 0;
		server.res = 0;
	}
}
