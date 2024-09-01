/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chartobin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:08:54 by danpalac          #+#    #+#             */
/*   Updated: 2024/08/11 20:52:16 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_char2bin(unsigned char c)
{
	char	*ret;
	int		k;

	ret = malloc(9);
	if (!ret)
		return (NULL);
	k = 7;
	while (k >= 0)
	{
		if (c & (1 << k))
			ret[7 - k] = '1';
		else
			ret[7 - k] = '0';
		k--;
	}
	ret[8] = '\0';
	return (ret);
}
