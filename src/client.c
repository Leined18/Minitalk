/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 08:23:00 by danpalac          #+#    #+#             */
/*   Updated: 2024/10/07 17:07:56 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "client.h"

static void	error(char *str, char *msg)
{
	if (str)
		str = NULL;
	ft_error(msg, 1);
}

void	send_signal(pid_t pid, int signal, int utime)
{
	usleep(utime);
	if (kill(pid, signal) == -1)
		error(0, 0);
}

static int	send_null(int pid, int utime)
{
	int	i;

	i = 0;
	while (i++ != 8)
	{
		usleep(utime);
		send_signal(pid, CHAR_0, 10);
	}
	return (1);
}

static int	send_bits(int pid, char *message)
{
	static int	bits = -1;
	int			byte_index;
	int			len;

	len = ft_strlen(message);
	while (message[++bits / 8] && bits < 8 * len)
	{
		byte_index = bits / 8;
		if (byte_index < len)
		{
			if (message[byte_index] & (0x80 >> (bits % 8)))
				send_signal(pid, CHAR_1, 176);
			else
				send_signal(pid, CHAR_0, 176);
		}
		send_signal(pid, 0, 176);
	}
	bits = -1;
	return (send_null(pid, 500));
}

int	main(int argc, char **argv)
{
	if (argc != 3 || !ft_isstrnum(argv[1]))
	{
		ft_error("Error", 0);
		ft_putstr_color_fd(YELLOW, USAGE, 2);
		ft_error("", 1);
	}
	send_bits(ft_atoi(argv[1]), argv[2]);
	return (0);
}
