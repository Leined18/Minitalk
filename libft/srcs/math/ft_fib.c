/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fib.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 15:37:58 by danpalac          #+#    #+#             */
/*   Updated: 2024/08/11 21:01:18 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_fib(long n)
{
	if (n <= 1)
		return (n);
	return (ft_fib(n - 1) + ft_fib(n - 2));
}

/*int	main(void)
{
	long	n;
	long	i;

	printf("Enter a number: ");
	scanf("%ld", &n);
	i = 1;
	while (i <= n)
	{
		printf("%ld\n", fib_ser(i));
		i++;
	}
}*/
