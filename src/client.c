/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 08:23:00 by danpalac          #+#    #+#             */
/*   Updated: 2024/10/07 12:07:36 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	error(char *str, char *msg)
{
	if (str)
		free(str);
	ft_error(msg, 1);
}

static void	send_null(int pid, char *str)
{
	int	i;

	i = 0;
	while (i++ != 8)
	{
		if (kill(pid, SIGUSR1) == -1)
			error(str, 0);
		usleep(1000);
	}
}

static void	send_bits(int pid, char *message, int bits)
{
	int	byte_index;
	int	len;

	if (!message[0])
		return ((void)send_null(pid, message));
	len = ft_strlen(message);
	if (bits >= 8 * len)
	{
		send_null(pid, message);
		return ;
	}
	byte_index = bits / 8;
	if (message[byte_index] & (0x80 >> (bits % 8)))
	{
		if (kill(pid, SIGUSR2) == -1)
			error(message, "Error sending SIGUSR2");
	}
	else
	{
		if (kill(pid, SIGUSR1) == -1)
			error(message, "Error sending SIGUSR1");
	}
	usleep(156);
	send_bits(pid, message, bits + 1);
}

int	main(int argc, char **argv)
{
	int	pid;

	if (argc != 3 || !ft_isstrnum(argv[1]))
	{
		ft_error("client: invalid arguments.\n", 0);
		ft_putstr_color_fd(YELLOW, "correct format: [./client <PID> <STR>].\n",
			2);
		ft_error("", 1);
	}
	pid = ft_atoi(argv[1]);
	send_bits(pid, argv[2], 0);
	return (0);
}
