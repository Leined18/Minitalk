/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 08:23:00 by danpalac          #+#    #+#             */
/*   Updated: 2024/10/09 14:35:02 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "client.h"

static void	send_signal(int pid, int signal)
{
	usleep(WAIT);
	if (kill(pid, signal) == -1)
		ft_error(BAD_SIGNAL, 1);
}

static int	send_null(int pid, int utime)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		usleep(utime);
		send_signal(pid, CHAR_0);
		i++;
	}
	return (1);
}

static void	send_byte(int pid, char byte)
{
	int	bits;

	bits = 0;
	while (bits < 8)
	{
		if (byte & (0x80 >> bits))
			send_signal(pid, CHAR_1);
		else
			send_signal(pid, CHAR_0);
		bits++;
	}
}

static int	send_bits(int pid, char *message)
{
	int	byte_index;
	int	len;

	len = ft_strlen(message);
	byte_index = 0;
	while (byte_index < len)
	{
		send_byte(pid, message[byte_index]);
		byte_index++;
	}
	return (send_null(pid, 400));
}

int	main(int argc, char **argv)
{
	if (argc != 3 || !ft_isstrnum(argv[1]))
		ft_error(USAGE, 1);
	usleep(WAIT * 2);
	send_bits(ft_atoi(argv[1]), argv[2]);
	return (0);
}
