/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bintoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:21:33 by danpalac          #+#    #+#             */
/*   Updated: 2024/07/26 20:50:03 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_bintoa(const char *bin)
{
	unsigned char	c;
	int				k;

	if (!bin)
		return ('\0');
	c = 0;
	k = 0;
	while (k < 8)
	{
		c <<= 1;
		if (bin[k] == '1')
			c |= 1;
		k++;
	}
	return ((char)c);
}
