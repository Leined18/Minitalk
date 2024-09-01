/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 20:22:57 by danpalac          #+#    #+#             */
/*   Updated: 2024/09/01 21:01:53 by danpalac         ###   ########.fr       */
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

	if (argc != 3)
		ft_error("", 1);
	ft_printf("%s", argv[3]);
}
