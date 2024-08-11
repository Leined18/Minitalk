/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 20:22:57 by danpalac          #+#    #+#             */
/*   Updated: 2024/08/11 16:04:34 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	ft_send_msg(int pid, char *s);

int	main(int ac, char **av)
{
	int		pid;
	char	*bits;

	if (ac != 3)
	{
		ft_printf("wrong number of arguments\n");
		return (0);
	}
	pid = ft_atoi(av[1]);
	bits = ft_strtobin(av[2]);
	if (bits == NULL)
	{
		ft_printf("allocation went wrong\n");
		return (0);
	}
	ft_send_msg(pid, bits);
	free(bits);
}

static void	ft_send_msg(int pid, char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '1')
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		i++;
		usleep(80);
	}
}
