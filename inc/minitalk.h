#ifndef MINITALK_H
# define MINITALK_H

# include "libft.h"
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

#endif // MINITALK_H