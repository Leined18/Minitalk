/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 16:39:51 by danpalac          #+#    #+#             */
/*   Updated: 2024/10/05 12:17:26 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	error(int pid, char *str)
{
	if (str)
		free(str);
	kill(pid, SIGUSR2);
	ft_error("server: unexpected error.", 1);
}

char	*print_and_free(char *message)
{
	ft_putstr_fd(message, 1);
	free(message);
	return (NULL);
}

void	handler(int signum)
{
	static char	c = 0xFF;
	static int	bits = 0;
	static char	*message = 0;
    
	if (signum == SIGUSR1)
		c ^= 0x80 >> bits;
	else if (signum == SIGUSR2)
		c |= 0x80 >> bits;
	if (++bits == 8)
	{
		if (c)
			message = ft_straddc(message, c);
		else
			message = print_and_free(message);
		bits = 0;
		c = 0xFF;
	}
}

int	main(void)
{
	struct sigaction	sa;
	sigset_t			b_mask;

	sigemptyset(&b_mask);
	sigaddset(&b_mask, SIGINT);
	sigaddset(&b_mask, SIGQUIT);
	sa.sa_handler = handler;
	sa.sa_mask = b_mask;
	sa.sa_flags = 0;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	ft_putstr_color_fd(GREEN, "PID: ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putstr_fd("\n", 1);
	while (1)
		pause();
}
