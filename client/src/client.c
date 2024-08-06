/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 20:22:57 by danpalac          #+#    #+#             */
/*   Updated: 2024/08/06 21:39:03 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "client.h"

int	main(int ac, char **av)
{
	char *bin;
	
	if (ac != 2)
	{
		ft_putstr_fd("Error: wrong number of arguments\n", 2);
		return (1);
	}
	else
	{
		ft_putstr_fd("Client PID: ", 1);
		ft_putnbr_fd(getpid(), 1);
		ft_putstr_fd("\n", 1);
	}
	bin = ft_strtobin(av[1]);
	if (bin == NULL)
	{
		ft_putstr_fd("Error: wrong argument\n", 2);
		return (1);
	}
	ft_putstr_fd("Binary: ", 1);
	ft_putstr_fd(bin, 1);
	ft_putstr_fd("\n", 1);
	free(bin);
	return (0);
}