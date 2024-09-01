/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 20:22:57 by danpalac          #+#    #+#             */
/*   Updated: 2024/09/01 20:48:18 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

/* void	handler(int signum, siginfo_t *info, void *context)
{
	kill(SIGUSR1);
	kill(SIGUSR2);
} */

int	main(int argc, char **argv)
{
	int pid;

	if (argc != 3)
		ft_error("", 1);
	pid = ft_atoi(argv[2]);
}
