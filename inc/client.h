#ifndef CLIENT_H
# define CLIENT_H

# include "shared.h"

# define USAGE "\rUsage:\n\t./client [pid_server] [message]"
# define BAD_SIGNAL "Signal sending failed: Operation not permitted."

# define CHAR_0 SIGUSR1
# define CHAR_1 SIGUSR2

void	send_signal(pid_t pid, int signal, char *msg);

#endif // CLIENT_H