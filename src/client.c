
#include "minitalk.h"

static void	error(char *str, char *msg)
{
	if (str)
		free(str);
	ft_error(msg, 1);
}
static int	send_null(int pid, char *str)
{
	static int	i = 0;

	if (i++ != 8)
	{
		if (kill(pid, SIGUSR1) == -1)
			error(str, 0);
		return (0);
	}
	free(str);
	return (1);
}

static int	send_bit(int pid, char *str)
{
	static char	*message = 0;
	static int	s_pid = 0;
	static int	bits = -1;
	int			byte_index;

	if (str)
		message = ft_strdup(str);
	if (!message)
		error(0, 0);
	if (pid)
		s_pid = pid;
	byte_index = ++bits / 8;
	if (byte_index < (int)ft_strlen(message) && message[byte_index])
	{
		if (message[byte_index] & (0x80 >> (bits % 8)))
		{
			if (kill(s_pid, SIGUSR2) == -1)
				error(message, 0);
		}
		else if (kill(s_pid, SIGUSR1) == -1)
			error(message, 0);
		return (0);
	}
	return (send_null(s_pid, message));
}

static void	ft_handler_sigusr(int signum)
{
	int	end;

	end = 0;
	if (signum == SIGUSR1)
		end = send_bit(0, 0);
	else if (signum == SIGUSR2)
		error(NULL, "Client: server ended unexpectly.");
	if (end)
		ft_successful("client: operation successful.\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 3 || !ft_isstrnum(argv[1]))
		error(NULL, "client: error invalid arguments.\n");
	signal(SIGUSR1, ft_handler_sigusr);
	signal(SIGUSR2, ft_handler_sigusr);
	send_bit(ft_atoi(argv[1]), argv[2]);
	while (1)
		pause();
}
