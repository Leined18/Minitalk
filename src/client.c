/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 08:23:00 by danpalac          #+#    #+#             */
/*   Updated: 2024/10/05 13:53:28 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	error(char *str, char *msg)
{
	if (str)
		free(str);
	ft_error(msg, 1);
}

static int	send_null(int pid, char *str)
{
	int	i = 0;

	while (i++ != 8)
	{
		if (kill(pid, SIGUSR1) == -1)
			error(str, 0);
		usleep(100);
	}
	return (1);
}

static int	send_bits(int pid, char *message)
{
	static int	bits = -1;
	int			byte_index;

	if (!message)
		error(0, 0);
	while (message[++bits / 8] || bits % 8)
	{
		byte_index = bits / 8;
		if (byte_index < (int)ft_strlen(message))
		{
			if (message[byte_index] & (0x80 >> (bits % 8)))  // 0x80 = 10000000
			{
				if (kill(pid, SIGUSR2) == -1)
					error(message, "");
			}
			else
				if (kill(pid, SIGUSR1) == -1)
					error(message, "");
			usleep(200);
		}
	}
	bits = -1;
	return (send_null(pid, message));
}


int	main(int argc, char **argv)
{	
	if (argc != 3 || !ft_isstrnum(argv[1]))
	{
		ft_error("client: invalid arguments.\n", 0);
		ft_putstr_color_fd(YELLOW, "correct format: [./client <PID> <STR>].\n",
			2);
		ft_error("", 1);
	} 
	send_bits(ft_atoi(argv[1]), argv[2]);
	return (0);
}
