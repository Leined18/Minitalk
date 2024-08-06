/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 20:22:46 by danpalac          #+#    #+#             */
/*   Updated: 2024/08/06 22:18:08 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"

static char	*ft_add_fs(char *start, char c);
static void	ft_handler(int sig);

int	main(void)
{
	ft_printf("Server PID: %u\n", getpid());
	while (1 == 1)
	{
		signal(SIGUSR1, ft_handler);
		signal(SIGUSR2, ft_handler);
		pause();
	}
	return (0);
}

static void	ft_handler(int sig)
{
	static char	*bits;
	static int	bitcount;
	char		*tmp;

	bitcount++;
	if (bits == NULL)
	{
		bits = ft_strdup("");
		bitcount = 1;
	}
	if (sig == SIGUSR2)
		bits = ft_add_fs(bits, '0');
	else
		bits = ft_add_fs(bits, '1');
	if (bitcount == 8)
	{
		tmp = ft_bintostr(bits);
		ft_printf("%s", tmp);
		free(bits);
		bits = NULL;
	}
}

static char	*ft_add_fs(char *start, char c)
{
	size_t	i;
	char	*tmp;

	tmp = malloc(ft_strlen(start) + 2);
	if (tmp == NULL)
		return (NULL);
	i = 0;
	while (start[i] != '\0')
	{
		tmp[i] = start[i];
		i++;
	}
	tmp[i] = c;
	tmp[i + 1] = '\0';
	free(start);
	return (tmp);
}
