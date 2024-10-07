/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 08:23:00 by danpalac          #+#    #+#             */
/*   Updated: 2024/10/07 13:35:16 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "client.h"

static void	error(char *str, char *msg)
{
	if (str)
		free(str);
	ft_error(msg, 1);
}

static int	send_null(int pid, char *str)
{
	int	i;

	i = 0;
	while (i++ != 8)
	{
		usleep(156);
		if (kill(pid, CHAR_0) == -1)
			error(str, 0);
	}
	return (1);
}

void	send_signal(pid_t pid, int signal)
{
	if (kill(pid, signal) == -1)
		ft_error("client: signal error.\n", 1);
}

static int	send_bits(int pid, char *message)
{
	static int	bits = -1;
	int			byte_index;

	while (message[++bits / 8] && bits < 8 * (int)ft_strlen(message))
	{
		byte_index = bits / 8;
		if (byte_index < (int)ft_strlen(message))
		{
			if (message[byte_index] & (0x80 >> (bits % 8)))
			{
				send_signal(pid, CHAR_1);
				usleep(100);
			}
			else
				send_signal(pid, CHAR_0);
			usleep(100);
		}
		usleep(50);
	}
	bits = -1;
	return (send_null(pid, message));
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
