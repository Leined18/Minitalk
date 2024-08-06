/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 20:21:23 by danpalac          #+#    #+#             */
/*   Updated: 2024/08/06 20:22:50 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_H_
# define SERVER_H_

# include <signal.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_server
{
	int	client;
	int	count;
	int	res;
	int	pid;
}		t_server;

#endif